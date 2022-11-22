/*
* Copyright (c) 2022, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

#include <map>
#include <vector>
#include <string>
#include <memory>
#include "I18N.h"

// Spanish localization file

namespace i2p
{
namespace i18n
{
namespace spanish // language namespace
{
	// language name in lowercase
	static std::string language = "spanish";

	// See for language plural forms here:
	// https://localization-guide.readthedocs.io/en/latest/l10n/pluralforms.html
	static int plural (int n) {
		return n != 1 ? 1 : 0;
	}

	static std::map<std::string, std::string> strings
	{
		{"KiB", "KiB"},
		{"MiB", "MiB"},
		{"GiB", "GiB"},
		{"building", "pendiente"},
		{"failed", "fallido"},
		{"expiring", "expiró"},
		{"established", "establecido"},
		{"unknown", "desconocido"},
		{"exploratory", "exploratorio"},
		{"Purple I2P Webconsole", "Consola web de Purple I2P"},
		{"<b>i2pd</b> webconsole", "Consola web de <b>i2pd</b>"},
		{"Main page", "Inicio"},
		{"Router commands", "Comandos de enrutador"},
		{"Local Destinations", "Destinos locales"},
		{"LeaseSets", "LeaseSets"},
		{"Tunnels", "Túneles"},
		{"Transit Tunnels", "Túneles de Tránsito"},
		{"Transports", "Transportes"},
		{"I2P tunnels", "Túneles I2P"},
		{"SAM sessions", "Sesiones SAM"},
		{"ERROR", "ERROR"},
		{"OK", "VALE"},
		{"Testing", "Probando"},
		{"Firewalled", "Con cortafuegos"},
		{"Unknown", "Desconocido"},
		{"Proxy", "Proxy"},
		{"Mesh", "Malla"},
		{"Error", "Error"},
		{"Clock skew", "Reloj desfasado"},
		{"Offline", "Desconectado"},
		{"Symmetric NAT", "NAT simétrico"},
		{"Uptime", "Tiempo en línea"},
		{"Network status", "Estado de red"},
		{"Network status v6", "Estado de red v6"},
		{"Stopping in", "Parando en"},
		{"Family", "Familia"},
		{"Tunnel creation success rate", "Tasa de éxito de creación de túneles"},
		{"Received", "Recibido"},
		{"KiB/s", "KiB/s"},
		{"Sent", "Enviado"},
		{"Transit", "Tránsito"},
		{"Data path", "Ruta de datos"},
		{"Hidden content. Press on text to see.", "Contenido oculto. Presione para ver."},
		{"Router Ident", "Ident del Enrutador"},
		{"Router Family", "Familia de enrutador"},
		{"Router Caps", "Atributos del Enrutador"},
		{"Version", "Versión"},
		{"Our external address", "Nuestra dirección externa"},
		{"supported", "soportado"},
		{"Routers", "Enrutadores"},
		{"Floodfills", "Inundaciones"},
		{"Client Tunnels", "Túneles de cliente"},
		{"Services", "Servicios"},
		{"Enabled", "Activado"},
		{"Disabled", "Desactivado"},
		{"Encrypted B33 address", "Dirección encriptada B33"},
		{"Address registration line", "Línea para registrar direcciones"},
		{"Domain", "Dominio"},
		{"Generate", "Generar"},
		{"<b>Note:</b> result string can be used only for registering 2LD domains (example.i2p). For registering subdomains please use i2pd-tools.", "<b>Nota:</b> la cadena resultante solo se puede usar para registrar dominios 2LD (ejemplo.i2p). Para registrar subdominios, por favor utilice i2pd-tools."},
		{"Address", "Dirección"},
		{"Type", "Tipo"},
		{"EncType", "TipoEncrip"},
		{"Inbound tunnels", "Túneles entrantes"},
		{"ms", "ms"},
		{"Outbound tunnels", "Túneles salientes"},
		{"Tags", "Etiquetas"},
		{"Incoming", "Entrante"},
		{"Outgoing", "Saliente"},
		{"Destination", "Destino"},
		{"Amount", "Cantidad"},
		{"Incoming Tags", "Etiquetas entrantes"},
		{"Tags sessions", "Sesiones de etiquetas"},
		{"Status", "Estado"},
		{"Local Destination", "Destino Local"},
		{"Streams", "Flujos"},
		{"Close stream", "Cerrar flujo"},
		{"I2CP session not found", "Sesión I2CP no encontrada"},
		{"I2CP is not enabled", "I2CP no está activado"},
		{"Invalid", "Inválido"},
		{"Store type", "Tipo de almacenamiento"},
		{"Expires", "Caduca"},
		{"Non Expired Leases", "Sesiones No Expiradas"},
		{"Gateway", "Puerta de enlace"},
		{"TunnelID", "TunnelID"},
		{"EndDate", "FechaVenc"},
		{"not floodfill", "no inundado"},
		{"Queue size", "Tamaño de cola"},
		{"Run peer test", "Ejecutar prueba de par"},
		{"Decline transit tunnels", "Rechazar túneles de tránsito"},
		{"Accept transit tunnels", "Aceptar túneles de tránsito"},
		{"Cancel graceful shutdown", "Cancelar apagado con gracia"},
		{"Start graceful shutdown", "Iniciar apagado con gracia"},
		{"Force shutdown", "Forzar apagado"},
		{"Reload external CSS styles", "Recargar estilos CSS externos"},
		{"<b>Note:</b> any action done here are not persistent and not changes your config files.", "<b>Nota:</b> cualquier acción hecha aquí no es persistente y no cambia tus archivos de configuración."},
		{"Logging level", "Nivel de registro de errores"},
		{"Transit tunnels limit", "Límite de túneles de tránsito"},
		{"Change", "Cambiar"},
		{"Change language", "Cambiar idioma"},
		{"no transit tunnels currently built", "no hay túneles de tránsito actualmente construidos"},
		{"SAM disabled", "SAM desactivado"},
		{"no sessions currently running", "no hay sesiones ejecutándose ahora"},
		{"SAM session not found", "Sesión SAM no encontrada"},
		{"SAM Session", "Sesión SAM"},
		{"Server Tunnels", "Túneles de Servidor"},
		{"Client Forwards", "Redirecciones de Cliente"},
		{"Server Forwards", "Redirecciones de Servidor"},
		{"Unknown page", "Página desconocida"},
		{"Invalid token", "Token inválido"},
		{"SUCCESS", "ÉXITO"},
		{"Stream closed", "Transmisión cerrada"},
		{"Stream not found or already was closed", "No se encontró la transmisión o ya se cerró"},
		{"Destination not found", "Destino no encontrado"},
		{"StreamID can't be null", "StreamID no puede ser nulo"},
		{"Return to destination page", "Volver a la página de destino"},
		{"You will be redirected in 5 seconds", "Serás redirigido en 5 segundos"},
		{"Transit tunnels count must not exceed 65535", "La cantidad de túneles de tránsito no puede exceder 65535"},
		{"Back to commands list", "Volver a lista de comandos"},
		{"Register at reg.i2p", "Registrar en reg.i2p"},
		{"Description", "Descripción"},
		{"A bit information about service on domain", "Un poco de información sobre el servicio en el dominio"},
		{"Submit", "Enviar"},
		{"Domain can't end with .b32.i2p", "El dominio no puede terminar con .b32.i2p"},
		{"Domain must end with .i2p", "El dominio debe terminar con .i2p"},
		{"Such destination is not found", "No se encontró el destino"},
		{"Unknown command", "Comando desconocido"},
		{"Command accepted", "Comando aceptado"},
		{"Proxy error", "Error de proxy"},
		{"Proxy info", "Información del proxy"},
		{"Proxy error: Host not found", "Error de proxy: Host no encontrado"},
		{"Remote host not found in router's addressbook", "Servidor remoto no encontrado en la libreta de direcciones del enrutador"},
		{"You may try to find this host on jump services below", "Puede intentar encontrar este dominio en los siguientes servicios de salto"},
		{"Invalid request", "Solicitud inválida"},
		{"Proxy unable to parse your request", "Proxy no puede procesar su solicitud"},
		{"addresshelper is not supported", "ayudante de dirección no soportado"},
		{"Host", "Dominio"},
		{"added to router's addressbook from helper", "añadido a la libreta de direcciones desde el ayudante"},
		{"Click here to proceed:", "Haga clic aquí para continuar:"},
		{"Continue", "Continuar"},
		{"Addresshelper found", "Se encontró ayudante de dirección"},
		{"already in router's addressbook", "ya se encontró en libreta de direcciones"},
		{"Click here to update record:", "Haga clic aquí para actualizar el registro:"},
		{"invalid request uri", "uri de solicitud inválida"},
		{"Can't detect destination host from request", "No se puede detectar el host de destino de la solicitud"},
		{"Outproxy failure", "Fallo en el proxy saliente"},
		{"bad outproxy settings", "configuración de outproxy incorrecta"},
		{"not inside I2P network, but outproxy is not enabled", "no está dentro de la red I2P, pero el proxy de salida no está activado"},
		{"unknown outproxy url", "url de proxy outproxy desconocido"},
		{"cannot resolve upstream proxy", "no se puede resolver el proxy de upstream"},
		{"hostname too long", "nombre de dominio muy largo"},
		{"cannot connect to upstream socks proxy", "no se puede conectar al proxy socks principal"},
		{"Cannot negotiate with socks proxy", "No se puede negociar con el proxy socks"},
		{"CONNECT error", "Error de CONNECT"},
		{"Failed to Connect", "Error al Conectar"},
		{"socks proxy error", "error de proxy socks"},
		{"failed to send request to upstream", "no se pudo enviar petición al principal"},
		{"No Reply From socks proxy", "Sin respuesta del proxy socks"},
		{"cannot connect", "no se puede conectar"},
		{"http out proxy not implemented", "proxy externo http no implementado"},
		{"cannot connect to upstream http proxy", "no se puede conectar al proxy http principal"},
		{"Host is down", "Servidor caído"},
		{"Can't create connection to requested host, it may be down. Please try again later.", "No se puede crear la conexión al servidor solicitado, puede estar caído. Intente de nuevo más tarde."},
		{"", ""},
	};

	static std::map<std::string, std::vector<std::string>> plurals
	{
		{"days", {"día", "días"}},
		{"hours", {"hora", "horas"}},
		{"minutes", {"minuto", "minutos"}},
		{"seconds", {"segundo", "segundos"}},
		{"", {"", ""}},
	};

	std::shared_ptr<const i2p::i18n::Locale> GetLocale()
	{
		return std::make_shared<i2p::i18n::Locale>(language, strings, plurals, [] (int n)->int { return plural(n); });
	}

} // language
} // i18n
} // i2p
