/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a491fc; name: FUN_01a491fc
 */


void FUN_01a491fc(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      param_2[0x40] = '\0';
      param_2[0x41] = '\0';
      param_2[0x42] = '\0';
      param_2[0x43] = '\0';
      param_2[0x44] = '\0';
      param_2[0x45] = '\0';
      param_2[0x46] = '\0';
      param_2[0x47] = '\0';
      uVar5 = *(undefined8 *)(param_2 + 0x50);
      uVar1 = *(undefined8 *)(param_2 + 0x58);
      uVar2 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x68) = uVar2;
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      uVar1 = *(undefined8 *)(param_2 + 0x78);
      uVar2 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
      *(undefined8 *)(param_1 + 0x70) = uVar5;
      *(undefined8 *)(param_1 + 0x78) = uVar1;
      uVar5 = *(undefined8 *)(param_2 + 0x90);
      uVar1 = *(undefined8 *)(param_2 + 0x98);
      uVar2 = *(undefined8 *)(param_2 + 0xa8);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
      *(undefined8 *)(param_1 + 0x90) = uVar5;
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0xb8);
      uVar5 = *(undefined8 *)(param_2 + 0xc0);
      uVar2 = *(undefined8 *)(param_2 + 200);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
      *(undefined8 *)(param_1 + 0xc0) = uVar5;
      *(undefined8 *)(param_1 + 200) = uVar2;
      *param_1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    uVar7 = *(ulong *)(param_1 + 0x40);
    if ((uVar7 & 1) != 0) {
      lVar3 = tpidr_el0;
      lVar6 = *(long *)(lVar3 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar6;
      }
      plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
      *(undefined8 *)(uVar7 - 0x11) = 0;
      (**(code **)(*plVar4 + 0x18))
                (plVar4,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
    }
    *param_1 = '\0';
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    if (param_2 != param_1) {
      uVar7 = *(ulong *)(param_1 + 0x40);
      if ((uVar7 & 1) != 0) {
        lVar3 = tpidr_el0;
        lVar6 = *(long *)(lVar3 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar3 + 0x38d490) = lVar6;
        }
        plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        *(undefined8 *)(uVar7 - 0x11) = 0;
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,(undefined8 *)(uVar7 - 0x11),(long)*(int *)(uVar7 - 9) + 0x10);
      }
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      param_2[0x40] = '\0';
      param_2[0x41] = '\0';
      param_2[0x42] = '\0';
      param_2[0x43] = '\0';
      param_2[0x44] = '\0';
      param_2[0x45] = '\0';
      param_2[0x46] = '\0';
      param_2[0x47] = '\0';
    }
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    param_1[0x8c] = param_2[0x8c];
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
    uVar5 = *(undefined8 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(param_1 + 0x94) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    param_1[0xb4] = param_2[0xb4];
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_2 + 0xb8);
    uVar5 = *(undefined8 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined8 *)(param_1 + 0xbc) = uVar5;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  }
  return;
}


