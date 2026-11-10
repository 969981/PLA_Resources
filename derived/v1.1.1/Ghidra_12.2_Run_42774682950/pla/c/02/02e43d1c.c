/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43d1c; name: FUN_02e43d1c
 */


undefined8 FUN_02e43d1c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (*DAT_0442d138)(4,0xc0);
  if (lVar1 == 0) {
    DAT_0440a410 = 0;
    uVar2 = 0x34;
  }
  else {
    FUN_02e43d78();
    uVar2 = 1;
    DAT_0440a410 = lVar1;
    *(undefined2 *)(lVar1 + 0xb8) = 0x101;
  }
  return uVar2;
}


