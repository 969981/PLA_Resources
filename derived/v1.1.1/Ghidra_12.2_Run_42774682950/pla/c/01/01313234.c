/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01313234; name: FUN_01313234
 */


void FUN_01313234(undefined1 param_1 [16],float param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_b8;
  float fStack_b4;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_84;
  
  lVar4 = *(long *)(param_3 + 0x5c0);
  lVar10 = 0x1500;
  lVar9 = *(long *)(lVar4 + 0x198);
  uVar8 = *(undefined8 *)(lVar4 + 0x78);
  uVar2 = *(undefined4 *)(lVar4 + 0x84);
  iVar7 = 0;
  lVar4 = -0x1040;
  uVar3 = param_3;
  do {
    uVar3 = FUN_0131afa4(uVar3,uVar2,iVar7);
    if ((int)uVar3 == 0) {
LAB_0131329c:
      *(undefined1 *)(lVar9 + lVar10) = 0;
      lVar1 = lVar9 + lVar4;
      lVar5 = *(long *)(lVar1 + 0x24b0);
      *(undefined8 *)(lVar1 + 0x2570) = 0;
      *(undefined8 *)(lVar1 + 0x2568) = 0;
      *(undefined8 *)(lVar1 + 0x2560) = 0;
      *(undefined8 *)(lVar1 + 0x2558) = 0;
      *(undefined8 *)(lVar1 + 0x2550) = 0;
      *(undefined8 *)(lVar1 + 0x2548) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined4 *)(lVar5 + 0x38) = 0;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      lVar5 = *(long *)(lVar1 + 0x24b0);
      *(undefined8 *)(lVar5 + 0x3c) = 0;
      *(undefined4 *)(lVar5 + 0x44) = 0;
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar1 + 0x24b0) + 0x58) =
           *(byte *)(*(long *)(lVar1 + 0x24b0) + 0x58) & 0xfe;
      lVar5 = *(long *)(lVar1 + 0x24b8);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined4 *)(lVar5 + 0x38) = 0;
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
        lVar5 = *(long *)(lVar1 + 0x24b8);
        *(undefined4 *)(lVar5 + 0x44) = 0;
        *(undefined8 *)(lVar5 + 0x3c) = 0;
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar1 + 0x24b8) + 0x58) =
             *(byte *)(*(long *)(lVar1 + 0x24b8) + 0x58) & 0xfe;
        pcVar6 = *(code **)(lVar1 + 0x24c8);
        *(undefined8 *)(lVar1 + 0x24b8) = 0;
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar1 + 0x24d8) = 0;
          *(undefined8 *)(lVar1 + 0x24d0) = 0;
          *(undefined8 *)(lVar1 + 0x24c8) = 0;
          *(undefined8 *)(lVar1 + 0x24c0) = 0;
          uVar3 = (*pcVar6)(lVar9 + lVar4 + 0x24e0);
        }
      }
    }
    else {
      local_84 = 0;
      fVar11 = (float)FUN_0131acc8(uVar8,uVar2,iVar7,&local_84);
      if (*(char *)(param_3 + 0x1e08) == '\0') {
        param_2 = ((param_2 + -1027.0) / 2000.0) * 936.0 + 495.0;
        fVar12 = *(float *)(param_3 + 0xd60);
        fVar14 = *(float *)(param_3 + 0x1e30);
        fVar13 = *(float *)(param_3 + 0xd64);
        fVar11 = ((((fVar11 + 1000.0) / 2000.0) * 936.0 + -468.0) - fVar12) * fVar14;
      }
      else {
        fVar12 = *(float *)(param_3 + 0x1e28) + *(float *)(param_3 + 0xd60);
        param_2 = param_2 + *(float *)(param_3 + 0x1e2c);
        fVar13 = *(float *)(param_3 + 0x1e2c) + *(float *)(param_3 + 0xd64);
        fVar14 = *(float *)(param_3 + 0x1e30);
        fVar11 = fVar14 * ((fVar11 + *(float *)(param_3 + 0x1e28)) - fVar12);
      }
      fVar15 = param_2 - fVar13;
      uVar3 = FUN_0131b444(local_84);
      if ((uVar3 & 1) == 0) goto LAB_0131329c;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = (ulong)(uint)(fVar13 + fVar15 * fVar14);
      local_b8 = (uint)CONCAT21(0x202,(&DAT_0388a8b8)[local_84]);
      _local_b8 = CONCAT44(fVar12 + fVar11,local_b8);
      uVar3 = FUN_013065d0(lVar9,iVar7 + 0x19,&local_b8);
    }
    iVar7 = iVar7 + 1;
    lVar4 = lVar4 + 0xd0;
    lVar10 = lVar10 + 0xd0;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}


