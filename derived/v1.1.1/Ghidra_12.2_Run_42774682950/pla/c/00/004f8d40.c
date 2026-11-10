/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f8d40; name: FUN_004f8d40
 */


undefined8 FUN_004f8d40(long *param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00403d80(&DAT_04184118);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00403d80(&DAT_04184118);
    if ((((lVar3 != 0) &&
         ((param_2 == 0 || (iVar1 = FUN_00404920(lVar2,0x88,param_2,0), iVar1 != 0)))) &&
        ((param_4 == 0 || (iVar1 = FUN_00404920(lVar3,0x88,param_4,0), iVar1 != 0)))) &&
       (iVar1 = FUN_00404920(lVar2,0x8a,0,lVar3), iVar1 != 0)) {
      uVar4 = 1;
      goto LAB_004f8e00;
    }
  }
  FUN_00403ee0(lVar2);
  FUN_00403ee0(lVar3);
  uVar4 = 0;
  lVar2 = 0;
  lVar3 = 0;
LAB_004f8e00:
  *param_1 = lVar2;
  *param_3 = lVar3;
  return uVar4;
}


