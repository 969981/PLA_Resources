/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bdaf0; name: FUN_004bdaf0
 */


undefined8 FUN_004bdaf0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_004071e0();
  uVar3 = 0;
  if (lVar2 != 0) {
    if ((*param_2 != '\0') && (iVar1 = FUN_00415400(param_2,0x3a,1,&LAB_004bf9e0,lVar2), iVar1 == 0)
       ) {
      FUN_00407010(lVar2);
      return 0;
    }
    FUN_00407010(*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = lVar2;
    if (*(long *)(param_1 + 8) != 0) {
      uVar3 = FUN_004bdb90((long *)(param_1 + 8),param_1 + 0x10,lVar2);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}


