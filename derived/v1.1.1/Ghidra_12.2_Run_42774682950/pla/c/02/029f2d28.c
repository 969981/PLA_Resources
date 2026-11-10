/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f2d28; name: FUN_029f2d28
 */


void FUN_029f2d28(long param_1,undefined8 param_2,byte *param_3)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  undefined1 auStack_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  
  lVar8 = *(long *)(param_1 + 0x20);
  bVar3 = *param_3;
  lVar10 = *(long *)(lVar8 + 0x20);
  lVar11 = *(long *)(*(long *)(*(long *)(lVar10 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120);
  uVar1 = *(short *)(lVar11 + 0x74) + *(short *)(param_3 + 2);
  uVar2 = *(ushort *)(lVar11 + 0x72);
  if (uVar1 <= *(ushort *)(lVar11 + 0x72)) {
    uVar2 = uVar1;
  }
  *(ushort *)(lVar11 + 0x74) = uVar2;
  *(undefined2 *)
   (*(long *)(*(long *)(*(long *)(lVar10 + 0x10) + 8) + (ulong)bVar3 * 8 + 0x120) + 0x2b0) = 0x1f00;
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),3);
  bVar3 = *param_3;
  uVar13 = (ulong)bVar3;
  if (uVar13 < 0x1e) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 200);
    pcVar9 = (char *)(lVar8 + uVar13 + 0xf4);
    if (*pcVar9 != '\0') {
      *pcVar9 = '\0';
      uVar13 = FUN_0294a978(lVar8,uVar13);
      if ((uVar13 & 1) == 0) {
        bVar4 = *(byte *)(lVar8 + 0x14e);
        if ((ulong)bVar4 < 0x1e) {
          *(byte *)(lVar8 + 0x14e) = bVar4 + 1;
          *(byte *)(lVar8 + (ulong)bVar4 + 0x130) = bVar3;
        }
      }
    }
  }
  if ((param_3[6] & 0x7f) != 0) {
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
  }
  pcVar9 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar3 = *param_3;
  if ((((*pcVar9 == '\0') || (pcVar9[2] != bVar3)) && ((pcVar9[3] == '\0' || (pcVar9[5] != bVar3))))
     && ((((pcVar9[6] == '\0' || (pcVar9[8] != bVar3)) &&
          ((pcVar9[9] == '\0' || (pcVar9[0xb] != bVar3)))) &&
         (((pcVar9[0xc] == '\0' || (pcVar9[0xe] != bVar3)) &&
          ((pcVar9[0xf] == '\0' || (pcVar9[0x11] != bVar3)))))))) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if (bVar3 < 6) {
      lVar10 = 0;
    }
    else if (bVar3 < 0xc) {
      lVar10 = 2;
    }
    else if (bVar3 < 0x12) {
      lVar10 = 1;
    }
    else if (bVar3 < 0x18) {
      lVar10 = 3;
    }
    else {
      lVar10 = (ulong)(bVar3 < 0x1e) << 2;
    }
    uVar6 = (uint)*(byte *)(lVar8 + lVar10 * 0x38 + 0x38);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (*(byte *)(*(long *)(lVar8 + lVar10 * 0x38 + (ulong)(uVar7 & 0xff) * 8 + 8) + 0x7d) ==
            bVar3) {
          uVar6 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
          if ((uVar6 & 0xff) == 6) {
            return;
          }
          bVar3 = *param_3;
          if (bVar3 < 6) {
            cVar12 = '\0';
          }
          else if (bVar3 < 0xc) {
            cVar12 = '\x02';
          }
          else if (bVar3 < 0x12) {
            cVar12 = '\x01';
          }
          else if (bVar3 < 0x18) {
            cVar12 = '\x03';
          }
          else {
            cVar12 = (bVar3 < 0x1e) << 2;
          }
          uVar5 = FUN_02947e24(*(undefined8 *)(param_1 + 8),uVar6);
          local_58._0_4_ = CONCAT13(1,CONCAT12(uVar5,CONCAT11(uVar5,cVar12)));
          FUN_029eb3e0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1400),&local_60,&local_58);
          local_58 = &PTR_LAB_04277240;
          local_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_39 = 0;
          uStack_38 = 0;
          if ((byte)local_60 < 0x1e) {
            local_50 = CONCAT71((uint7)(byte)local_60,1);
          }
          local_60 = &local_58;
          FUN_029d07c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),auStack_68,&local_60);
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
  }
  return;
}


