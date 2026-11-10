/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5ee80; name: FUN_02e5ee80
 */


bool FUN_02e5ee80(undefined4 *param_1,undefined4 *param_2,long param_3,long *param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  *param_4 = 0;
  local_60 = *param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  local_70 = *param_1;
  local_6c = param_1[1];
  local_68 = param_1[2];
  uVar1 = *(uint *)(param_3 + 0x38);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    fVar7 = 3.4028235e+38;
    lVar5 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_3 + 0x30) + lVar5);
      if (((*(char *)(lVar4 + 0x80) == '\0') && (iVar3 = FUN_02e4bb18(lVar4,&local_70), -1 < iVar3))
         && (fVar6 = (float)FUN_02e4c160(lVar4,&local_60), fVar6 < fVar7)) {
        *param_4 = lVar4;
        *param_5 = iVar3;
        fVar7 = fVar6;
      }
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar1 * 8 != lVar5);
    bVar2 = *param_4 != 0;
  }
  return bVar2;
}


