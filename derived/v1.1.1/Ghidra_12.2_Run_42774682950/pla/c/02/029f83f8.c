/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f83f8; name: FUN_029f83f8
 */


void FUN_029f83f8(long param_1,undefined1 *param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_90 [16];
  byte local_80 [4];
  undefined4 local_7c;
  ulong local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_2 = 0;
  lVar3 = *param_3;
  uVar2 = 1 << (ulong)(*(uint *)(param_3 + 1) & 7);
  uVar4 = (ulong)(*(uint *)(param_3 + 1) >> 3) & 0xff;
  if ((uVar2 & *(byte *)(lVar3 + uVar4 + 0x387)) != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar3 + 0x7d) * 8 + 0x120) + uVar4;
    *(byte *)(lVar5 + 0x387) = *(byte *)(lVar5 + 0x387) & ((byte)uVar2 ^ 0xff);
    FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x1f,*(undefined1 *)(lVar3 + 0x7d));
    lVar3 = *param_3;
    if ((*(byte *)(lVar3 + 0x178) & 7) != 0) {
      uStack_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_61 = 0;
      local_38 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_80[0] = *(byte *)(lVar3 + 0x7d);
      local_7c = 0x1d;
      local_78 = (ulong)local_80[0];
      uStack_5a = 1;
      local_58 = 0x1000000;
      FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_90,local_80);
      lVar3 = *param_3;
    }
    cVar1 = *(char *)(lVar3 + 0x7d);
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,cVar1,0);
    if (*(char *)((long)param_3 + 0xc) == '\0') {
      lVar3 = *(long *)(param_1 + 0x48);
      uVar4 = (ulong)*(byte *)(lVar3 + 0xd88);
      if (uVar4 != 0) {
        plVar7 = (long *)(lVar3 + 8);
        lVar5 = *plVar7;
        if (lVar5 != 0) goto LAB_029f854c;
        do {
          do {
            uVar4 = uVar4 - 1;
            plVar7 = plVar7 + 0xc;
            if (uVar4 == 0) goto LAB_029f8504;
            lVar5 = *plVar7;
          } while (lVar5 == 0);
LAB_029f854c:
        } while (*(char *)(lVar5 + 0x7d) != cVar1);
        do {
          *(undefined1 *)((long)plVar7 + 0x5d) = 1;
          uVar8 = (ulong)*(byte *)(lVar3 + 0xd88);
          uVar4 = 0;
          lVar5 = (long)plVar7 + (0x58 - lVar3);
          do {
            if (uVar8 == uVar4) {
              uVar4 = uVar8;
              break;
            }
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + -0x60;
          } while (lVar5 != 0);
          if ((uint)*(byte *)(lVar3 + 0xd88) <= ((uint)uVar4 & 0xff)) break;
          uVar4 = (ulong)((uint)uVar4 & 0xff);
          lVar5 = uVar8 - uVar4;
          plVar7 = (long *)(lVar3 + 8 + uVar4 * 0x60);
          lVar6 = *plVar7;
          if (lVar6 != 0) goto LAB_029f85c8;
          do {
            do {
              lVar5 = lVar5 + -1;
              plVar7 = plVar7 + 0xc;
              if (lVar5 == 0) goto LAB_029f8504;
              lVar6 = *plVar7;
            } while (lVar6 == 0);
LAB_029f85c8:
          } while (*(char *)(lVar6 + 0x7d) != cVar1);
        } while( true );
      }
    }
LAB_029f8504:
    *param_2 = 1;
  }
  return;
}


