/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e9a8; name: FUN_0083e9a8
 */


void FUN_0083e9a8(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_60 [32];
  
  if (*(char *)(param_1 + 0xf9) != '\0') {
    lVar8 = *(long *)(param_1 + 0x68);
    lVar4 = param_1 + 0x60;
    if (lVar8 == lVar4) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar6 = (undefined8 *)(lVar8 + 0x10);
        uVar2 = FUN_007f0f48(puVar6,param_2);
        if ((uVar2 & 1) != 0) goto joined_r0x0083ea30;
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != lVar4);
      puVar6 = (undefined8 *)0x0;
    }
joined_r0x0083ea30:
    if (param_3 < 0) {
      if (puVar6 != (undefined8 *)0x0) {
        FUN_007e8fec(lVar4,puVar6 + -2);
        FUN_007e8fc4(param_1 + 0x78,param_1 + 0x78,
                     (long)(puVar6 + -2) + (long)*(int *)(param_1 + 0x8c));
        return;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        if (*(int *)(param_1 + 0x88) == 0) {
          return;
        }
        lVar8 = FUN_007e9088(param_1 + 0x78);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar8 - *(int *)(param_1 + 0x8c);
        }
        puVar6 = (undefined8 *)(lVar8 + 0x10);
        *puVar6 = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        FUN_007f0ce0(puVar6);
        FUN_007e8fa0(lVar4,lVar4,lVar8);
      }
      *(undefined1 *)((long)puVar6 + 0x21) = 0;
      FUN_007f0f88(puVar6,param_2);
      *(bool *)(puVar6 + 4) = 0 < param_3;
      puVar1 = PTR_DAT_043773c0;
      uVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      FUN_007f0fc8(auStack_60,param_2);
      lVar4 = FUN_00827e58(uVar3,auStack_60);
      FUN_007e34a4(auStack_60);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x78) == '\0')) {
        uVar5 = *(undefined8 *)PTR_DAT_04377ce8;
        lVar4 = FUN_00855004(*(undefined8 *)puVar1);
        uVar7 = *(undefined8 *)(lVar4 + 0x98);
        uVar3 = FUN_0082deb0(param_2);
        FUN_00830f1c(uVar5,uVar7,uVar3,0 < param_3);
        FUN_0083e2d4(param_1);
      }
      *(undefined1 *)(param_1 + 0xf8) = 1;
      FUN_007ecf14(param_1 + 0x100);
    }
  }
  return;
}


