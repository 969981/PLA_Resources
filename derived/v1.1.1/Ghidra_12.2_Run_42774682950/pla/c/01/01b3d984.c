/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3d984; name: FUN_01b3d984
 */


void FUN_01b3d984(float param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *local_48;
  long *local_40;
  long lStack_38;
  
  if ((*(int *)(param_2 + 0xe14) != 0) && (0.0 < *(float *)(param_2 + 0xe1c))) {
    if (*(code **)(param_2 + 0xae0) != (code *)0x0) {
      local_40 = (long *)((ulong)local_40 & 0xffffffffffffff00);
      (**(code **)(param_2 + 0xae0))(param_2 + 0xb00,&local_40);
    }
    FUN_01a9b270(param_2,1,4);
    param_1 = *(float *)(param_2 + 0xe18) + param_1;
    fVar7 = *(float *)(param_2 + 0xe1c);
    *(float *)(param_2 + 0xe18) = param_1;
    if (fVar7 <= param_1) {
      *(float *)(param_2 + 0xe18) = fVar7;
      param_1 = fVar7;
    }
    fVar7 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0xa0))(param_1 / fVar7);
    fVar7 = fVar7 + 0.0;
    fVar21 = (float)*(undefined8 *)(param_2 + 0xe30);
    fVar9 = fVar21 + (float)*(undefined8 *)(param_2 + 0xe50);
    fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0xe30) >> 0x20);
    fVar10 = fVar22 + (float)((ulong)*(undefined8 *)(param_2 + 0xe50) >> 0x20);
    fVar23 = (float)*(undefined8 *)(param_2 + 0xe38);
    fVar11 = fVar23 + (float)*(undefined8 *)(param_2 + 0xe58);
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0xe38) >> 0x20);
    fVar12 = fVar24 + (float)((ulong)*(undefined8 *)(param_2 + 0xe58) >> 0x20);
    lVar6 = param_2 + 0x1a8;
    fVar13 = (float)*(undefined8 *)(param_2 + 0xe40);
    fVar17 = fVar13 + (float)*(undefined8 *)(param_2 + 0xe60);
    fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0xe40) >> 0x20);
    fVar18 = fVar14 + (float)((ulong)*(undefined8 *)(param_2 + 0xe60) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_2 + 0xe48);
    fVar19 = fVar15 + (float)*(undefined8 *)(param_2 + 0xe68);
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0xe48) >> 0x20);
    fVar20 = fVar16 + (float)((ulong)*(undefined8 *)(param_2 + 0xe68) >> 0x20);
    fVar21 = fVar21 + (fVar9 - fVar21) * fVar7;
    fVar22 = fVar22 + (fVar10 - fVar22) * fVar7;
    fVar23 = fVar23 + (fVar11 - fVar23) * fVar7;
    fVar24 = fVar24 + (fVar12 - fVar24) * fVar7;
    fVar9 = fVar9 + (fVar17 - fVar9) * fVar7;
    fVar10 = fVar10 + (fVar18 - fVar10) * fVar7;
    fVar11 = fVar11 + (fVar19 - fVar11) * fVar7;
    fVar12 = fVar12 + (fVar20 - fVar12) * fVar7;
    fVar21 = fVar21 + (fVar9 - fVar21) * fVar7;
    fVar22 = fVar22 + (fVar10 - fVar22) * fVar7;
    fVar23 = fVar23 + (fVar11 - fVar23) * fVar7;
    fVar24 = fVar24 + (fVar12 - fVar24) * fVar7;
    FUN_00956dac(&local_40,lVar6);
    *(undefined1 *)(local_40 + 0x1c) = 1;
    local_40[0x1b] =
         CONCAT44(fVar24 + ((fVar12 + ((fVar20 + (fVar16 - fVar20) * fVar7) - fVar12) * fVar7) -
                           fVar24) * fVar7,
                  fVar23 + ((fVar11 + ((fVar19 + (fVar15 - fVar19) * fVar7) - fVar11) * fVar7) -
                           fVar23) * fVar7);
    local_40[0x1a] =
         CONCAT44(fVar22 + ((fVar10 + ((fVar18 + (fVar14 - fVar18) * fVar7) - fVar10) * fVar7) -
                           fVar22) * fVar7,
                  fVar21 + ((fVar9 + ((fVar17 + (fVar13 - fVar17) * fVar7) - fVar9) * fVar7) -
                           fVar21) * fVar7);
    if (local_40 != (long *)0x0) {
      lVar5 = local_40[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    FUN_00956dac(&local_40,lVar6);
    uVar8 = *(undefined8 *)(param_2 + 0xe20);
    local_40[0x17] =
         CONCAT44(fVar7 * (float)((ulong)*(undefined8 *)(param_2 + 0xe28) >> 0x20),
                  fVar7 * (float)*(undefined8 *)(param_2 + 0xe28));
    local_40[0x16] = CONCAT44(fVar7 * (float)((ulong)uVar8 >> 0x20),fVar7 * (float)uVar8);
    *(undefined1 *)(local_40 + 0x1c) = 1;
    if (local_40 != (long *)0x0) {
      lVar5 = local_40[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (*(float *)(param_2 + 0xe18) == *(float *)(param_2 + 0xe1c)) {
      *(undefined4 *)(param_2 + 0xe1c) = *(undefined4 *)(param_2 + 0xe10);
      *(undefined4 *)(param_2 + 0xe18) = 0;
      FUN_00956dac(&local_48,lVar6);
      lStack_38 = local_48[0x19];
      local_40 = (long *)local_48[0x18];
      FUN_01a83770(param_2,param_2 + 0xe40,&local_40);
      if (local_48 != (long *)0x0) {
        lVar6 = local_48[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      *(undefined8 *)(param_2 + 0x6b0) = 0;
      *(undefined8 *)(param_2 + 0x6b8) = 0;
      if (*(char *)(param_2 + 0x6a0) == '\0') {
        *(undefined1 *)(param_2 + 0x6a0) = 1;
      }
      if (*(code **)(param_2 + 0xae0) != (code *)0x0) {
        local_40 = (long *)CONCAT71(local_40._1_7_,1);
        (**(code **)(param_2 + 0xae0))(param_2 + 0xb00,&local_40);
      }
      FUN_01a9b270(param_2,1,4);
      *(undefined4 *)(param_2 + 0xe14) = 0;
    }
  }
  return;
}


