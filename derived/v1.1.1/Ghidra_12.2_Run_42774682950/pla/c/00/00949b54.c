/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00949b54; name: FUN_00949b54
 */


void FUN_00949b54(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[1] == '\0') {
    return;
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 4));
  return;
}


