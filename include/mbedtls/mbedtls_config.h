#define MBEDTLS_CONFIG_VERSION 0x04000000

// fliegt für esp8266 raus
#define MBEDTLS_NET_C


// error handling später weglassen
#define MBEDTLS_ERROR_C
// raus später
#define MBEDTLS_DEBUG_C

// wichtig
// Requires: PSA_WANT_ALG_ECDH
//           PSA_WANT_ALG_ECDSA
//           MBEDTLS_X509_CRT_PARSE_C
#define MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA_ENABLED


// raus später
#define MBEDTLS_SSL_ALL_ALERT_MESSAGES


//** nachfragen, webserver benötigt
//#define MBEDTLS_SSL_ALPN

#define MBEDTLS_SSL_CACHE_C

#define MBEDTLS_SSL_CLI_C

#define MBEDTLS_SSL_EXTENDED_MASTER_SECRET

#define MBEDTLS_SSL_MAX_FRAGMENT_LENGTH

#define MBEDTLS_SSL_PROTO_TLS1_2

#define MBEDTLS_SSL_SERVER_NAME_INDICATION

#define MBEDTLS_SSL_SRV_C

#define MBEDTLS_SSL_TLS_C

#define MBEDTLS_SSL_VARIABLE_BUFFER_LENGTH

/*
• MBEDTLS_SSL_CACHE_DEFAULT_MAX_ENTRIES: WEGLASSEN (Das überschreiben wir später direkt im C-Code über die Funktion mbedtls_ssl_cache_set_max_entries(..., 2), um den RAM-Verbrauch der Tabelle auf ein absolutes Minimum zu drücken).
• MBEDTLS_SSL_CACHE_DEFAULT_TIMEOUT: WEGLASSEN (Steuern wir ebenfalls sauber im Code).
*/

#define MBEDTLS_SSL_CIPHERSUITES MBEDTLS_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256

// ram tuning
#define MBEDTLS_SSL_IN_CONTENT_LEN              4096 // default war 16384 2kb eventuell besser
#define MBEDTLS_SSL_OUT_CONTENT_LEN             4096

#define MBEDTLS_X509_CRT_PARSE_C

// für esp8266 aktivieren
//#define MBEDTLS_X509_REMOVE_INFO

#define MBEDTLS_X509_USE_C

#define MBEDTLS_X509_MAX_INTERMEDIATE_CA   2

