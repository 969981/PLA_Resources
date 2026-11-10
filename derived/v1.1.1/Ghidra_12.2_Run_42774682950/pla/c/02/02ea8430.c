/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8430; name: FUN_02ea8430
 */


undefined4 * FUN_02ea8430(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = DAT_0440a420;
  if (DAT_0440a424 <= DAT_0440a420) {
    iVar1 = DAT_0440a424 + (DAT_0440a424 >> 1);
    if (DAT_0440a424 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02ea84c8(iVar1);
    if ((uVar5 & 1) == 0) {
      return (undefined4 *)0x0;
    }
  }
  if (DAT_0440a424 <= uVar2) {
    return (undefined4 *)0x0;
  }
  uVar5 = (ulong)DAT_0440a420;
  DAT_0440a420 = DAT_0440a420 + 1;
  puVar3 = (undefined4 *)(DAT_0440a418 + uVar5 * 0x28);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  lVar4 = DAT_0440a418 + uVar5 * 0x28;
  *puVar3 = 0;
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  return puVar3;
}


