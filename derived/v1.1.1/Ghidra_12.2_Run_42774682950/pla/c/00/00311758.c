/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311758; name: FUN_00311758
 */


bool FUN_00311758(ulong *param_1,ulong param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined4 local_34;
  undefined8 local_28;
  
  uVar11 = param_2 >> 3 & 0x1fffffff;
  if ((int)uVar11 == 0) {
LAB_003119e8:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    switch((uint)param_2 & 7) {
    case 0:
      pbVar10 = (byte *)*param_1;
      if ((pbVar10 < (byte *)param_1[1]) && (-1 < (char)*pbVar10)) {
        uVar6 = (ulong)*pbVar10;
        *param_1 = (ulong)(pbVar10 + 1);
      }
      else {
        auVar12 = FUN_00310270(param_1);
        uVar6 = auVar12._0_8_;
        if ((auVar12._8_8_ & 1) == 0) goto LAB_003119e8;
      }
      if (param_3 != 0) {
        FUN_0030d5b0(param_3,uVar11,uVar6);
        return true;
      }
      break;
    case 1:
      puVar8 = (undefined8 *)*param_1;
      if ((int)param_1[1] - (int)puVar8 < 8) {
        uVar6 = FUN_00310194(param_1,&local_28);
        if ((uVar6 & 1) == 0) goto LAB_003119e8;
      }
      else {
        local_28 = *puVar8;
        *param_1 = (ulong)(puVar8 + 1);
      }
      if (param_3 != 0) {
        FUN_0030d7b0(param_3,uVar11,local_28);
      }
      break;
    case 2:
      pbVar10 = (byte *)*param_1;
      if (pbVar10 < (byte *)param_1[1]) {
        bVar2 = *pbVar10;
        uVar6 = (ulong)bVar2;
        uVar4 = (uint)bVar2;
        if ((char)bVar2 < '\0') goto LAB_00311998;
        *param_1 = (ulong)(pbVar10 + 1);
      }
      else {
        uVar6 = 0;
LAB_00311998:
        uVar6 = FUN_00310590(param_1,uVar6);
        uVar4 = (uint)uVar6;
        if ((long)uVar6 < 0) goto LAB_003119e8;
      }
      if (param_3 == 0) {
        if ((int)uVar4 < 0) goto LAB_003119e8;
        if ((int)uVar4 <= (int)param_1[1] - (int)*param_1) {
          *param_1 = *param_1 + (long)(int)uVar4;
          break;
        }
        uVar11 = FUN_0030f9dc(param_1,uVar4);
      }
      else {
        uVar5 = FUN_0030d8b4(param_3,uVar11);
        uVar11 = FUN_0030fcd8(param_1,uVar5,uVar6 & 0xffffffff);
      }
      if ((uVar11 & 1) == 0) goto LAB_003119e8;
      break;
    case 3:
      iVar1 = *(int *)((long)param_1 + 0x34);
      *(int *)((long)param_1 + 0x34) = iVar1 + -1;
      if (0 < iVar1) {
        if (param_3 == 0) {
          uVar5 = 0;
          goto LAB_003118ec;
        }
        uVar5 = FUN_0030d9d0(param_3,uVar11);
        pbVar10 = (byte *)*param_1;
        if (pbVar10 < (byte *)param_1[1]) goto LAB_003118f8;
LAB_00311934:
        uVar4 = 0;
        do {
          uVar4 = FUN_003107ec(param_1,uVar4);
          *(uint *)(param_1 + 4) = uVar4;
          while( true ) {
            uVar7 = 0;
            if ((uVar4 == 0) || (uVar7 = uVar4, (uVar4 & 7) == 4)) {
              if (*(int *)((long)param_1 + 0x34) < (int)param_1[7]) {
                *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
              }
              return uVar7 == ((uint)param_2 & 0xfffffff8 | 4);
            }
            uVar11 = FUN_00311758(param_1,uVar4,uVar5);
            if ((uVar11 & 1) == 0) goto LAB_003119e8;
LAB_003118ec:
            pbVar10 = (byte *)*param_1;
            if ((byte *)param_1[1] <= pbVar10) goto LAB_00311934;
LAB_003118f8:
            uVar4 = (uint)*pbVar10;
            if ((char)*pbVar10 < '\0') break;
            *param_1 = (ulong)(pbVar10 + 1);
            *(uint *)(param_1 + 4) = uVar4;
          }
        } while( true );
      }
      goto LAB_003119e8;
    default:
      goto switchD_003117a0_caseD_4;
    case 5:
      puVar9 = (undefined4 *)*param_1;
      if ((int)param_1[1] - (int)puVar9 < 4) {
        uVar6 = FUN_003100b8(param_1,&local_34);
        if ((uVar6 & 1) == 0) goto LAB_003119e8;
      }
      else {
        local_34 = *puVar9;
        *param_1 = (ulong)(puVar9 + 1);
      }
      if (param_3 != 0) {
        FUN_0030d6ac(param_3,uVar11,local_34);
      }
    }
    bVar3 = true;
  }
switchD_003117a0_caseD_4:
  return bVar3;
}


