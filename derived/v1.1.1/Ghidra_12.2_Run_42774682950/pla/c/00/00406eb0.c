/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00406eb0; name: FUN_00406eb0
 */


undefined8 FUN_00406eb0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_004060f0(0x100,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_00405540(&DAT_0439e6d8);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar3;
}


