/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300df84; name: FUN_0300df84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300df84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  *param_1 = &PTR_LAB_042da948;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined2 *)(param_1 + 0x18) = 0x17;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar9 = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x5f7ffff0;
  *(undefined2 *)(param_1 + 0x1a) = 0x13;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x26) = 0x11;
  *(undefined2 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)((long)param_1 + 0xd2) = 1;
  *(undefined1 *)((long)param_1 + 0x132) = 1;
  *(undefined1 *)((long)param_1 + 0x134) = 1;
  *(undefined1 *)((long)param_1 + 0x142) = 1;
  *(undefined1 *)((long)param_1 + 0x162) = 1;
  param_1[0x2d] = 0x3f8000003f800000;
  *(undefined1 *)((long)param_1 + 0x192) = 1;
  param_1[0x33] = 0x3f8000003f800000;
  *(undefined2 *)(param_1 + 0x38) = 5;
  param_1[0x24] = 0;
  param_1[0x29] = 0x5f7ffff0df7ffff0;
  param_1[0x2a] = 0x3f8000003f800000;
  uVar10 = 0x80;
  *(undefined2 *)(param_1 + 0x2c) = 0x10;
  *(undefined2 *)(param_1 + 0x32) = 0x10;
  iVar11 = 6;
  param_1[2] = 1;
  param_1[3] = 0;
  uVar12 = 0x100;
  do {
    fVar13 = (float)((uint)*(ushort *)(&DAT_03ab05f0 + (long)(int)uVar10 * 2) * 0x1000 + 0x3b800000)
    ;
    do {
      if (iVar11 < 0) {
        *(char *)((long)param_1 + 0x1c2) = (char)uVar10 + (uVar10 < 0xff && fVar13 < 1.0);
        *(undefined1 *)((long)param_1 + 0x1c3) = 0;
        *(undefined8 *)((long)param_1 + 0x1c4) = 0x3f8000003f800000;
        uVar8 = DAT_0388a148;
        uVar7 = DAT_0388a140;
        uVar4 = _UNK_03889a88;
        uVar3 = _DAT_03889a80;
        uVar2 = _UNK_03888d18;
        uVar1 = _DAT_03888d10;
        *(undefined4 *)((long)param_1 + 0x1cc) = 0;
        uVar6 = _UNK_0388a138;
        uVar5 = _DAT_0388a130;
        param_1[9] = uVar4;
        param_1[8] = uVar3;
        param_1[0xb] = uVar8;
        param_1[10] = uVar7;
        param_1[0xd] = uVar2;
        param_1[0xc] = uVar1;
        param_1[0xf] = uVar6;
        param_1[0xe] = uVar5;
        param_1[0x11] = uVar4;
        param_1[0x10] = uVar3;
        param_1[0x13] = uVar8;
        param_1[0x12] = uVar7;
        param_1[0x15] = uVar2;
        param_1[0x14] = uVar1;
        param_1[0x17] = uVar6;
        param_1[0x16] = uVar5;
        *(undefined2 *)((long)param_1 + 0x133) = 0x300;
        *(undefined4 *)((long)param_1 + 0xd4) = 0x940090;
        *(undefined1 *)((long)param_1 + 0x144) = 1;
        *(undefined4 *)(param_1 + 0x27) = 0;
        *(undefined1 *)((long)param_1 + 0xd2) = 0;
        *(undefined1 *)((long)param_1 + 0x143) = 0;
        param_1[0x22] = 0;
        param_1[0x29] = 0x3f060aa6bf060aa6;
        param_1[0x2a] = 0x3f8000003f4ccccd;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x21] = uVar2;
        param_1[0x20] = uVar1;
        param_1[0x1d] = uVar4;
        param_1[0x1c] = uVar3;
        param_1[0x1f] = uVar8;
        param_1[0x1e] = uVar7;
        *(undefined2 *)((long)param_1 + 0x163) = 0;
        param_1[0x2d] = 0x3f8000003f4ccccd;
        param_1[0x2e] = 0x3f800000c2c80000;
        param_1[0x2f] = 0x3fece78840071c72;
        param_1[0x30] = 0x3fc75923df7ffff0;
        *(undefined2 *)((long)param_1 + 0x193) = 0x100;
        param_1[0x33] = 0x3f8000003f4ccccd;
        param_1[0x34] = 0x3fcc430e3fc5dca8;
        param_1[0x35] = 0xc2055a7042055a89;
        param_1[0x36] = 0xc2054b1442054b2d;
        return;
      }
      if (1.0 <= fVar13) {
        uVar12 = uVar10;
        uVar10 = uVar9;
      }
      uVar9 = uVar10;
      uVar10 = (int)(uVar9 + uVar12) >> 1;
      iVar11 = iVar11 + -1;
      fVar13 = 0.0;
    } while (uVar10 == 0);
  } while( true );
}


