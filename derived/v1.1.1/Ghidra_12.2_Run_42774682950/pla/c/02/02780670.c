/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780670; name: FUN_02780670
 */


bool FUN_02780670(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char *__s1;
  undefined8 uVar8;
  char *pcVar9;
  char *__s2;
  long lVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    pcVar9 = param_2 + -0x18;
    iVar6 = strcmp(pcVar9,param_1);
    if (iVar6 < 0) {
      uVar1 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + -0x10);
      uVar4 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)param_1 = *(undefined8 *)pcVar9;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)pcVar9 = uVar1;
      *(undefined8 *)(param_2 + -0x10) = uVar3;
      *(undefined8 *)(param_2 + -8) = uVar8;
      return true;
    }
    break;
  case 3:
    FUN_02780180(param_1,param_1 + 0x18,param_2 + -0x18);
    break;
  case 4:
    FUN_02780300(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -0x18);
    break;
  case 5:
    FUN_02780420(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -0x18);
    break;
  default:
    FUN_02780180(param_1,param_1 + 0x18,param_1 + 0x30);
    if (param_1 + 0x48 != param_2) {
      lVar10 = 0;
      iVar6 = 0;
      pcVar9 = param_1 + 0x48;
      __s2 = param_1 + 0x30;
      do {
        __s1 = pcVar9;
        iVar7 = strcmp(__s1,__s2);
        if (iVar7 < 0) {
          local_68 = *(undefined8 *)__s1;
          local_60 = *(undefined8 *)(__s1 + 8);
          local_58 = *(undefined8 *)(__s1 + 0x10);
          lVar5 = lVar10;
          do {
            lVar11 = lVar5;
            *(undefined8 *)(param_1 + lVar11 + 0x48) = *(undefined8 *)(param_1 + lVar11 + 0x30);
            *(undefined8 *)(param_1 + lVar11 + 0x50) = *(undefined8 *)(param_1 + lVar11 + 0x38);
            *(undefined8 *)(param_1 + lVar11 + 0x58) = *(undefined8 *)(param_1 + lVar11 + 0x40);
            if (lVar11 == -0x30) break;
            iVar7 = strcmp((char *)&local_68,param_1 + lVar11 + 0x18);
            lVar5 = lVar11 + -0x18;
          } while (iVar7 < 0);
          iVar6 = iVar6 + 1;
          *(undefined8 *)(param_1 + lVar11 + 0x30) = local_68;
          *(undefined8 *)(param_1 + lVar11 + 0x38) = local_60;
          *(undefined8 *)(param_1 + lVar11 + 0x40) = local_58;
          if (iVar6 == 8) {
            return __s1 + 0x18 == param_2;
          }
        }
        lVar10 = lVar10 + 0x18;
        pcVar9 = __s1 + 0x18;
        __s2 = __s1;
      } while (__s1 + 0x18 != param_2);
    }
  }
  return true;
}


