/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a0d74; name: FUN_007a0d74
 */


char * FUN_007a0d74(undefined8 *param_1,char *param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 auVar8 [12];
  char *local_38;
  
  local_38 = param_2;
  uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
  if ((uVar3 & 1) == 0) {
    if (*local_38 == '\b') {
      bVar2 = local_38[1];
      uVar5 = (uint)bVar2;
      puVar1 = (uint *)(param_1 + 2);
      if ((char)bVar2 < '\0') {
        uVar5 = ((uint)bVar2 + (uint)(byte)local_38[2] * 0x80) - 0x80;
        if (-1 < local_38[2]) {
          lVar7 = 3;
          goto LAB_007a0de0;
        }
        auVar8 = FUN_00322fe0();
        local_38 = auVar8._0_8_;
        *puVar1 = auVar8._8_4_;
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
      }
      else {
        lVar7 = 2;
LAB_007a0de0:
        local_38 = local_38 + lVar7;
        *puVar1 = uVar5;
      }
      uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
      if ((uVar3 & 1) == 0) {
        if (*local_38 != '\x10') goto LAB_007a0eec;
        lVar7 = **(long **)(param_1[1] + 0x10);
        puVar4 = (uint *)FUN_0079a6dc(param_1[1],puVar1);
        param_1[3] = puVar4;
        if (lVar7 == **(long **)(param_1[1] + 0x10)) goto LAB_007a0eec;
        bVar2 = local_38[1];
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar5 = ((uint)bVar2 + (uint)(byte)local_38[2] * 0x80) - 0x80;
          if (-1 < local_38[2]) {
            lVar7 = 3;
            goto LAB_007a0e80;
          }
          auVar8 = FUN_00322fe0();
          local_38 = auVar8._0_8_;
          *puVar4 = auVar8._8_4_;
          if (local_38 == (char *)0x0) {
            FUN_007a0fc8(param_1[1],puVar1);
            return (char *)0x0;
          }
        }
        else {
          lVar7 = 2;
LAB_007a0e80:
          local_38 = local_38 + lVar7;
          *puVar4 = uVar5;
        }
        uVar3 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)(param_3 + 0x5c));
        if ((uVar3 & 1) != 0) {
          return local_38;
        }
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
        lVar7 = FUN_0079f8c4(*(undefined8 *)*param_1);
        param_1[4] = lVar7;
        puVar6 = (undefined4 *)param_1[3];
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | 2;
        *(undefined4 *)(lVar7 + 0x14) = *puVar6;
        FUN_007a0fc8(param_1[1],puVar1);
        lVar7 = param_1[4];
      }
      else {
        if (local_38 == (char *)0x0) {
          return (char *)0x0;
        }
LAB_007a0eec:
        lVar7 = FUN_0079f8c4(*(undefined8 *)*param_1);
        param_1[4] = lVar7;
      }
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | 1;
      *(uint *)(lVar7 + 0x10) = *puVar1;
      goto LAB_007a0f10;
    }
  }
  else if (local_38 == (char *)0x0) {
    return (char *)0x0;
  }
  lVar7 = FUN_0079f8c4(*(undefined8 *)*param_1);
  param_1[4] = lVar7;
LAB_007a0f10:
  local_38 = (char *)FUN_0079fe4c(lVar7,local_38,param_3);
  if (local_38 != (char *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*(long *)param_1[4] + 0x70))();
    *(undefined4 *)(param_1 + 2) = *puVar6;
    puVar6 = (undefined4 *)FUN_0079a6dc(param_1[1],param_1 + 2);
    param_1[3] = puVar6;
    lVar7 = param_1[4];
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | 2;
    *puVar6 = *(undefined4 *)(lVar7 + 0x14);
  }
  return local_38;
}


