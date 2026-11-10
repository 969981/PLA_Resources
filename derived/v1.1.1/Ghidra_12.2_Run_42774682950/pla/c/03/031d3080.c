/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d3080; name: FUN_031d3080
 */


bool FUN_031d3080(long param_1,long param_2,int *param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int local_88 [2];
  short local_80 [4];
  int local_78 [2];
  short local_70 [4];
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_68[0] = *param_3;
  if (*(int *)(lVar5 + 0x108) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = (*(byte *)(*(long *)(lVar5 + 0x100) + (long)local_68[0]) & 1) == 0;
  }
  if (local_68[0] < *(int *)(lVar5 + 0x20)) {
    lVar7 = *(long *)(lVar5 + 0x18);
    iVar6 = local_68[0];
    if (*(int *)(lVar5 + 0x98) != 0) {
      iVar6 = *(int *)(*(long *)(lVar5 + 0x90) + (long)local_68[0] * 4);
    }
    iVar2 = local_68[0];
    if (iVar6 != -1) {
      lVar7 = *(long *)(lVar5 + 0xb0);
      iVar2 = iVar6;
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0xd0);
    iVar2 = local_68[0] - *(int *)(lVar5 + 0x20);
  }
  if (((bVar3) || (cVar4 = FUN_031d2ff4(param_2,local_68,local_58,local_60), cVar4 == '\0')) ||
     (local_58[0] == local_60[0])) {
    bVar3 = false;
  }
  else {
    lVar5 = lVar7 + (long)iVar2 * 0x10;
    bVar3 = false;
    iVar6 = local_58[0];
    do {
      sVar1 = *param_4;
      if (sVar1 < *(short *)(lVar7 + (long)iVar2 * 0x10 + 8)) {
        local_78[0] = iVar6;
        local_70[0] = sVar1;
        cVar4 = FUN_031e2618(*(undefined8 *)(param_1 + 0x18),param_2,lVar5,local_70,local_78);
      }
      else {
        local_88[0] = iVar6;
        local_80[0] = sVar1;
        cVar4 = FUN_031e2ae0(*(undefined8 *)(param_1 + 0x18),param_2,lVar5,local_80,local_88);
      }
      iVar6 = iVar6 + 1;
      bVar3 = bVar3 || cVar4 != '\0';
    } while (local_60[0] != iVar6);
  }
  return bVar3;
}


