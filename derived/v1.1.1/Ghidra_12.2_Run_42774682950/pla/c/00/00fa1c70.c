/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa1c70; name: FUN_00fa1c70
 */


ulong FUN_00fa1c70(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  char local_30;
  long *local_28;
  
  FUN_00fa1e3c(&local_38,param_1 + 0x288);
  lVar1 = *local_28;
  lVar2 = local_28[1];
  if (local_30 != '\0') {
    *(undefined8 *)(local_38 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_38 + 4));
  }
  return (ulong)(lVar2 - lVar1) >> 4 & 0xffffffff;
}


