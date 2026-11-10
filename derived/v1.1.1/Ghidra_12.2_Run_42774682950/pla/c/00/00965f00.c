/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00965f00; name: FUN_00965f00
 */


void FUN_00965f00(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_188 [8];
  long local_180 [30];
  uint local_90;
  undefined8 local_88;
  int local_80 [2];
  undefined1 local_78;
  char local_77;
  undefined4 local_74;
  undefined2 local_70;
  
  *(undefined1 *)(param_1 + 0x133) = 0xff;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 3;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  local_88 = 0x2000000;
  FUN_009346d8(auStack_188,*(undefined8 *)(param_2 + 0xd0),&local_88);
  if (local_90 != 0) {
    plVar10 = local_180;
    do {
      lVar12 = *plVar10;
      uVar4 = *(undefined1 *)(*(long *)(lVar12 + 0x70) + 0x7d);
      iVar5 = FUN_009270c4(*(undefined8 *)(param_2 + 0x150),uVar4);
      if (-1 < iVar5) {
        *(long *)(param_1 + (long)iVar5 * 8 + 0x70) = lVar12;
        uVar6 = (ulong)*(byte *)(*(long *)(lVar12 + 0x70) + 0x368);
        if (uVar6 != 0) {
          lVar13 = param_1 + (long)iVar5 * 0x14;
          uVar11 = 0;
          lVar8 = 0x300;
          do {
            cVar2 = *(char *)(*(long *)(param_2 + 0x100) + 0x71);
            if (cVar2 != '\x1f') {
              uVar7 = *(undefined4 *)(*(long *)(lVar12 + 0x70) + lVar8);
              uVar3 = FUN_00929368(*(undefined8 *)(param_2 + 0xe0),uVar4,cVar2,uVar7);
              *(undefined1 *)(param_1 + 0xa0 + (long)iVar5 * 4 + uVar11) = uVar3;
              puVar9 = *(undefined8 **)(param_2 + 0x58);
              FUN_0295e190(puVar9[1],*puVar9);
              **(undefined8 **)(puVar9[5] + 0x10) = 0;
              local_70 = 1;
              local_78 = uVar4;
              local_77 = cVar2;
              local_74 = uVar7;
              FUN_029f6a40(*(undefined8 *)(*(long *)(puVar9[5] + 0x130) + 0x1cc0),local_80,&local_78
                          );
              if (local_80[0] < 8) {
                uVar7 = 0;
                if (local_80[0] != 0) {
                  uVar7 = 3;
                }
                if (local_80[0] == 7) {
                  uVar7 = 1;
                }
              }
              else {
                uVar7 = 2;
              }
              *(undefined4 *)(lVar13 + uVar11 * 4 + 0xb8) = uVar7;
            }
            lVar1 = lVar13 + uVar11;
            uVar11 = uVar11 + 1;
            *(undefined1 *)(lVar1 + 200) = 1;
            lVar8 = lVar8 + 0x1c;
          } while (uVar6 != uVar11);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_180 + local_90);
  }
  lVar12 = FUN_00934074(*(undefined8 *)(param_2 + 0xd0),0);
  if (lVar12 == 0) {
    uVar4 = 0x1f;
  }
  else {
    uVar4 = *(undefined1 *)(*(long *)(lVar12 + 0x70) + 0x7d);
  }
  uVar4 = FUN_009270c4(*(undefined8 *)(param_2 + 0x150),uVar4);
  *(undefined1 *)(param_1 + 0x132) = uVar4;
  *(undefined2 *)(param_1 + 0x130) = 1;
  return;
}


