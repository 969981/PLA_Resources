/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cf4b4; name: FUN_028cf4b4
 */


void FUN_028cf4b4(undefined8 param_1,undefined1 (*param_2) [16],byte *param_3,int *param_4,
                 char *param_5)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  char *pcVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_5 == (char *)0x0) {
    *param_3 = 0;
LAB_028cf4f0:
    puVar5 = (ushort *)((long)param_4 - (long)*param_4);
    if (6 < *puVar5) {
      uVar3 = 0;
      if ((ulong)puVar5[3] != 0) {
        uVar3 = (ulong)*(byte *)((long)param_4 + (ulong)puVar5[3]);
      }
      if (((8 < *puVar5) && ((ulong)puVar5[4] != 0)) &&
         (puVar1 = (uint *)((long)param_4 + (ulong)puVar5[4]), lVar6 = (long)puVar1 + (ulong)*puVar1
         , lVar6 != 0)) {
        pcVar4 = param_5;
        if ((int)uVar3 != 1) {
          pcVar4 = (char *)0x0;
        }
        auVar8 = (**(code **)(PTR_PTR_04387f90 + uVar3 * 8))(param_1,lVar6,pcVar4);
        *param_2 = auVar8;
        *param_3 = *param_3 | 1;
      }
    }
    if (param_5 != (char *)0x0) goto LAB_028cf560;
    pcVar4 = (char *)0x0;
LAB_028cf574:
    puVar5 = (ushort *)((long)param_4 - (long)*param_4);
    if (0xe < *puVar5) {
      uVar3 = 0;
      if ((ulong)puVar5[7] != 0) {
        uVar3 = (ulong)*(byte *)((long)param_4 + (ulong)puVar5[7]);
      }
      if (((0x10 < *puVar5) && ((ulong)puVar5[8] != 0)) &&
         (puVar1 = (uint *)((long)param_4 + (ulong)puVar5[8]), lVar6 = (long)puVar1 + (ulong)*puVar1
         , lVar6 != 0)) {
        if ((int)uVar3 != 1) {
          pcVar4 = (char *)0x0;
        }
        auVar8 = (**(code **)(PTR_PTR_04387f90 + uVar3 * 8))(param_1,lVar6,pcVar4);
        param_2[2] = auVar8;
        *param_3 = *param_3 | 4;
      }
    }
    if (param_5 != (char *)0x0) goto LAB_028cf5e4;
    pcVar4 = (char *)0x0;
LAB_028cf604:
    lVar6 = (long)*param_4;
    uVar2 = *(ushort *)((long)param_4 - lVar6);
    if (uVar2 < 0xb) {
      uVar3 = 0;
    }
    else {
      uVar7 = (ulong)((ushort *)((long)param_4 - lVar6))[5];
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = (ulong)*(byte *)((long)param_4 + uVar7);
      }
    }
    if (param_5 != (char *)0x0) {
      param_5[0x11] = (char)uVar3;
      goto joined_r0x028cf5f8;
    }
  }
  else {
    if (*param_5 == '\0') goto LAB_028cf4f0;
LAB_028cf560:
    pcVar4 = param_5 + 8;
    if (*pcVar4 == '\0') goto LAB_028cf574;
LAB_028cf5e4:
    pcVar4 = param_5 + 0x10;
    if (*pcVar4 != '\0') {
      return;
    }
    uVar3 = (ulong)(byte)param_5[0x11];
    if (param_5[0x11] == 0) goto LAB_028cf604;
joined_r0x028cf5f8:
    if ((param_5 != (char *)0x0) && (((int)uVar3 - 3U & 0xff) < 2)) goto LAB_028cf688;
    lVar6 = (long)*param_4;
    uVar2 = *(ushort *)((long)param_4 - lVar6);
  }
  if (uVar2 < 0xd) {
    return;
  }
  uVar7 = (ulong)*(ushort *)((long)param_4 + (0xc - lVar6));
  if (uVar7 == 0) {
    return;
  }
  puVar1 = (uint *)((long)param_4 + uVar7);
  param_4 = (int *)((long)puVar1 + (ulong)*puVar1);
LAB_028cf688:
  if (param_4 != (int *)0x0) {
    auVar8 = (**(code **)(PTR_PTR_04387f88 + uVar3 * 8))(param_1,param_4,pcVar4);
    param_2[1] = auVar8;
    *param_3 = *param_3 | 2;
  }
  return;
}


