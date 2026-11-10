/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045c230; name: FUN_0045c230
 */


uint FUN_0045c230(void *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  size_t __n;
  size_t sVar8;
  
  __n = (size_t)(int)param_3;
  iVar4 = memcmp(param_1,param_2,__n);
  if (iVar4 < 1) {
    return 0xffffffff;
  }
  if ((int)param_3 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      if (*(char *)((long)param_1 + uVar6) != *(char *)((long)param_2 + uVar6)) break;
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  do {
    sVar8 = __n;
    if (((long)sVar8 < 1) || (*(char *)((long)param_1 + (sVar8 - 1)) != '\0')) break;
    __n = sVar8 - 1;
  } while (*(char *)((long)param_2 + (sVar8 - 1)) == -1);
  iVar4 = (int)uVar6;
  if (iVar4 < (int)sVar8 + -1) {
    return 0xffffffff;
  }
  if ((int)sVar8 <= iVar4) {
    return iVar4 << 3;
  }
  bVar1 = *(byte *)((long)param_1 + (uVar6 & 0xffffffff));
  bVar2 = *(byte *)((long)param_2 + (uVar6 & 0xffffffff));
  bVar3 = bVar2 ^ bVar1;
  uVar5 = 0xffffffff;
  uVar7 = 7;
  switch(bVar3) {
  case 1:
switchD_0045c318_caseD_1:
    bVar1 = bVar3 & bVar1;
    goto joined_r0x0045c360;
  case 2:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    goto switchD_0045c318_caseD_2;
  case 3:
    uVar7 = 6;
    break;
  case 7:
    uVar7 = 5;
    break;
  case 0xf:
    uVar7 = 4;
    break;
  case 0x1f:
    uVar7 = 3;
    break;
  default:
    if (bVar3 == 0x3f) {
      uVar7 = 2;
      goto switchD_0045c318_caseD_1;
    }
    if (bVar3 != 0x7f) {
      return 0xffffffff;
    }
    uVar7 = 1;
    bVar1 = bVar1 & 0x7f;
joined_r0x0045c360:
    if (bVar1 != 0) {
      return 0xffffffff;
    }
    goto LAB_0045c3b4;
  }
  uVar5 = 0xffffffff;
  if ((bVar3 & bVar1) == 0) {
LAB_0045c3b4:
    uVar5 = 0xffffffff;
    if ((bVar3 & bVar2) == bVar3) {
      uVar5 = uVar7 | iVar4 << 3;
    }
  }
switchD_0045c318_caseD_2:
  return uVar5;
}


