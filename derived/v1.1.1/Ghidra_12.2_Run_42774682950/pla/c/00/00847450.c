/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847450; name: FUN_00847450
 */


char * FUN_00847450(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_0084747c_caseD_8;
  default:
    pcVar1 = "Unknown";
switchD_0084747c_caseD_8:
    return pcVar1;
  case 0x2c:
    return "Net";
  case 0x30:
    return "Turn";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x74:
    return "Atomic";
  case 0x75:
    return "Event";
  case 0x76:
    return "BroadcastEvent";
  case 0x77:
    return "Clock";
  case 0x7b:
    return "Voice";
  case 0x7c:
    return "Reliable";
  case 0x80:
    return "BroadcastReliable";
  case 0x81:
    return "StreamBroadcastReliable";
  case 0x98:
    return "Session";
  case 0xa0:
    return "NatTraversalResult";
  case 0xa4:
    return "MonitoringData";
  case 0xac:
    return "WanNat";
  case 0xb0:
    return "Reckoning1d";
  case 0xb4:
    return "Reckoning3d";
  }
}


