/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e652f0; name: FUN_02e652f0
 */


undefined8 * FUN_02e652f0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_02f59dd0();
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = DAT_0440a098;
    if (DAT_0440a098 == (undefined8 *)0x0) {
      DAT_0440a0c8 = 0;
      puVar2 = (undefined8 *)(*DAT_0442d138)(7,0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = DAT_0440a098;
      }
      else {
        puVar2[2] = 0;
        *puVar2 = &PTR_FUN_042a5f90;
        puVar2[1] = 0;
        DAT_0440a098 = puVar2;
      }
    }
  }
  return puVar2;
}


