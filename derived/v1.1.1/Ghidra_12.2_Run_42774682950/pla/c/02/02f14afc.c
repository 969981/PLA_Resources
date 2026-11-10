/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f14afc; name: FUN_02f14afc
 */


int FUN_02f14afc(long *param_1)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if ((*(int *)(lVar9 + 0x2b0) != 0) && (DAT_0440ae38 != 0)) {
    lVar7 = (ulong)DAT_0440ae38 << 3;
    plVar6 = DAT_0440ae30;
    do {
      lVar4 = *plVar6;
      lVar1 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        lVar1 = *(long *)(lVar4 + 8) + -0x18;
      }
      if ((*(int *)(lVar1 + 0x2b0) == *(int *)(lVar9 + 0x2b0)) && (*(long *)(lVar4 + 0x130) == 0)) {
        FUN_02f2d918(lVar4,lVar9,0);
        FUN_02ecdeb8(lVar9);
        return 5;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  puVar5 = (undefined8 *)(*DAT_0442d138)(5,0x1a8);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar9 + 0x238) = 0;
    FUN_02f111b8(0,lVar9,4,1);
    iVar3 = 2;
  }
  else {
    puVar5[2] = 0xc580000000000000;
    puVar5[3] = 0;
    puVar5[0xb] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 0x13) = 0;
    *puVar5 = &PTR_FUN_042ac9a0;
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 0x18) = 0;
    puVar5[0x19] = 0;
    *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xf8 | 1;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[0xd] = &PTR_LAB_042ac428;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    uVar2 = DAT_042ab26c;
    *(undefined2 *)(puVar5 + 0x1a) = DAT_042ab26c;
    *(undefined2 *)(puVar5 + 0x1c) = uVar2;
    *(undefined4 *)((long)puVar5 + 0xd3) = 0x1010101;
    *(undefined4 *)((long)puVar5 + 0xe3) = 0x1010101;
    *(undefined1 *)((long)puVar5 + 0xd2) = 0;
    puVar5[0x1b] = 0;
    *(undefined1 *)((long)puVar5 + 0xe2) = 0;
    *(undefined4 *)(puVar5 + 0x1d) = 0;
    puVar5[0x24] = 0;
    *(undefined4 *)(puVar5 + 0x28) = 0;
    *(undefined4 *)(puVar5 + 0x2f) = 0;
    puVar5[0x22] = &PTR_LAB_042ad1d8;
    puVar5[0x23] = 0;
    *(byte *)(puVar5 + 0x2c) = *(byte *)(puVar5 + 0x2c) & 0xfc;
    puVar5[0x2d] = 0;
    puVar5[0x2e] = 0x2b00000000;
    puVar5[0x1e] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x20] = 0;
    puVar5[0x21] = 0;
    puVar5[0x26] = 0;
    puVar5[0x27] = 0;
    puVar5[0x29] = 0;
    puVar5[0x2a] = 0;
    *(undefined8 *)((long)puVar5 + 0x17c) = 0;
    *(undefined4 *)(puVar5 + 0x33) = 0;
    *(undefined8 *)((long)puVar5 + 0x19c) = 0x7f7fffff7f7fffff;
    puVar5[0x25] = 0;
    iVar3 = FUN_02f2d918(puVar5,lVar9,1);
    if (iVar3 == 1) {
      iVar3 = FUN_02f1453c(puVar5);
      *(ushort *)((long)param_1 + 0xc) =
           *(ushort *)((long)param_1 + 0xc) & 0xfeff | (ushort)(iVar3 == 1) << 8;
    }
    else if (iVar3 == 0x3f) {
      puVar5[0xc] = 0;
      puVar8 = &DAT_0440a460;
      if (DAT_0440a460 != 0) {
        puVar8 = DAT_0440a458 + 0xc;
      }
      *puVar8 = puVar5;
      iVar3 = 1;
      DAT_0440a458 = puVar5;
    }
    else {
      FUN_02f2b7ac(puVar5,0);
      plVar6 = (long *)puVar5[0x26];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x68))(plVar6,0);
        puVar8 = (undefined8 *)puVar5[0x26];
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8);
          (*DAT_0442d150)(5,puVar8);
        }
        puVar5[0x26] = 0;
      }
      (**(code **)*puVar5)(puVar5);
      (*DAT_0442d150)(5,puVar5);
    }
  }
  return iVar3;
}


