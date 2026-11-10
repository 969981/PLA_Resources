/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec6ec; name: FUN_007ec6ec
 */


/* WARNING: Removing unreachable block (ram,0x007ec84c) */

void FUN_007ec6ec(undefined8 param_1,long *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *__s2;
  uint uVar7;
  ulong local_38;
  undefined4 local_30;
  undefined4 local_28 [2];
  
  local_38 = local_38 & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,&local_38);
  __s2 = *(byte **)(param_3 + 8);
  if ((void *)param_2[1] == (void *)0x0) {
    if (__s2 == (byte *)0x0) goto LAB_007ec740;
LAB_007ec774:
    uVar3 = *(uint *)(param_3 + 0x14);
    if (uVar3 != 0) {
      if (*(int *)(param_3 + 0x18) == 1) {
        bVar4 = *__s2;
        pbVar1 = __s2;
        uVar5 = 0;
        while ((bVar4 != 0 && ((long)pbVar1 - (long)__s2 < (long)(ulong)uVar3))) {
          if ((char)bVar4 < 0) {
            if ((int)(char)bVar4 + 0x3eU < 0x1e) {
              uVar7 = 2;
            }
            else if ((bVar4 & 0xf0) == 0xe0) {
              uVar7 = 3;
            }
            else if ((bVar4 & 0xf8) == 0xf0) {
              uVar7 = 4;
            }
            else {
              uVar7 = 5;
              if (((bVar4 & 0xfc) != 0xf8) && (uVar7 = 6, (bVar4 & 0xfe) != 0xfc)) {
                uVar7 = 0;
              }
            }
          }
          else {
            uVar7 = 1;
          }
          uVar2 = uVar7;
          if (uVar7 == 0) {
            uVar2 = 1;
          }
          pbVar1 = pbVar1 + uVar2;
          if (uVar7 == 0) break;
          bVar4 = *pbVar1;
          uVar5 = uVar5 + 1;
        }
      }
      else {
        if (*(int *)(param_3 + 0x18) != 2) goto LAB_007ec884;
        uVar5 = uVar3 >> 1;
      }
      if (uVar5 != 0) {
        (**(code **)(*param_2 + 0x28))(&local_38,param_2);
        FUN_007ee660(param_1,&local_38);
        goto LAB_007ec894;
      }
    }
  }
  else if (__s2 != (byte *)0x0) {
LAB_007ec740:
    if ((int)param_2[3] == *(int *)(param_3 + 0x18)) {
      uVar3 = *(uint *)((long)param_2 + 0x14);
      if (uVar3 == *(uint *)(param_3 + 0x14)) {
        if ((uVar3 == 0) || (iVar6 = memcmp((void *)param_2[1],__s2,(ulong)uVar3), iVar6 == 0))
        goto LAB_007ec894;
        __s2 = *(byte **)(param_3 + 8);
      }
    }
    if (__s2 != (byte *)0x0) goto LAB_007ec774;
  }
LAB_007ec884:
  (**(code **)(*param_2 + 0x18))(param_2);
LAB_007ec894:
  local_30 = 0;
  local_38 = 8;
  (**(code **)(*param_2 + 0x20))(param_2,&local_38);
  return;
}


