/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00268eb4; name: FUN_00268eb4
 */


void FUN_00268eb4(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 0x10));
  if (*(uint *)(param_2 + 0x10) == 0xffffffff || piVar5 == (int *)0x0) {
    return;
  }
  iVar4 = *piVar5;
  if (0x4c534144 < iVar4) goto LAB_00269040;
  do {
    if (iVar4 < 0x33305045) {
      if (iVar4 < 0x31414145) {
        if (iVar4 == 0x30414145) {
          *(ulong *)(param_1 + 0x2c8) = (long)piVar5 + (ulong)(uint)piVar5[5];
          goto LAB_00268fcc;
        }
        if (iVar4 == 0x30434145) {
          *(ulong *)(param_1 + 0x2a8) = (long)piVar5 + (ulong)(uint)piVar5[5];
          goto LAB_00268fcc;
        }
        if (iVar4 == 0x31305045) {
          uVar3 = piVar5[5];
          *(undefined4 *)(param_1 + 0x330) = 1;
          *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)uVar3;
        }
      }
      else if (iVar4 < 0x314e5246) {
        if (iVar4 == 0x31414145) {
          *(ulong *)(param_1 + 0x2d0) = (long)piVar5 + (ulong)(uint)piVar5[5];
          goto LAB_00268fcc;
        }
        if (iVar4 == 0x31434145) {
          *(ulong *)(param_1 + 0x2b0) = (long)piVar5 + (ulong)(uint)piVar5[5];
          goto LAB_00268fcc;
        }
      }
      else if (iVar4 == 0x314e5246) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x250) = (long)piVar5 + (ulong)uVar3;
      }
      else if (iVar4 == 0x32305045) {
        *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
        *(undefined4 *)(param_1 + 0x330) = 2;
      }
    }
    else if (iVar4 < 0x46534346) {
      if (iVar4 < 0x44415046) {
        if (iVar4 == 0x33305045) {
          *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
          *(undefined4 *)(param_1 + 0x330) = 3;
        }
        else if (iVar4 == 0x34305045) {
          *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
          *(undefined4 *)(param_1 + 0x330) = 4;
        }
      }
      else if (iVar4 == 0x44415046) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x278) = (long)piVar5 + (ulong)uVar3;
      }
      else if (iVar4 == 0x444e5246) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x248) = (long)piVar5 + (ulong)uVar3;
      }
    }
    else if (iVar4 < 0x4c4f4346) {
      if (iVar4 == 0x46534346) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x288) = (long)piVar5 + (ulong)uVar3;
      }
      else if (iVar4 == 0x47414d46) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 600) = (long)piVar5 + (ulong)uVar3;
      }
    }
    else if (iVar4 == 0x4c4f4346) {
      uVar3 = piVar5[5];
      *(undefined1 *)(param_1 + 3) = 1;
      *(ulong *)(param_1 + 0x268) = (long)piVar5 + (ulong)uVar3;
    }
    else if (iVar4 == 0x4c504145) {
      *(ulong *)(param_1 + 0x2c0) = (long)piVar5 + (ulong)(uint)piVar5[5];
      goto LAB_00268fcc;
    }
LAB_00268fd0:
    puVar1 = (uint *)(piVar5 + 3);
    piVar2 = (int *)((long)piVar5 + (ulong)*puVar1);
    piVar5 = (int *)0x0;
    if (*puVar1 != 0xffffffff) {
      piVar5 = piVar2;
    }
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar4 = *piVar5;
  } while (iVar4 < 0x4c534145);
LAB_00269040:
  if (iVar4 < 0x52544145) {
    if (0x50444142 < iVar4) {
      if (iVar4 < 0x50445543) {
        if (iVar4 == 0x50444143) {
          *(ulong *)(param_1 + 0x310) = (long)piVar5 + (ulong)(uint)piVar5[5];
        }
        else if (iVar4 == 0x50445343) {
          *(ulong *)(param_1 + 0x300) = (long)piVar5 + (ulong)(uint)piVar5[5];
          *(ulong *)(param_1 + 0x308) = (ulong)(uint)piVar5[1] - 0x20;
        }
      }
      else if (iVar4 == 0x50445543) {
        *(ulong *)(param_1 + 0x318) = (long)piVar5 + (ulong)(uint)piVar5[5];
      }
      else if (iVar4 == 0x52454145) {
        uVar3 = piVar5[5];
        *(undefined2 *)(param_1 + 1) = 0x101;
        *(ulong *)(param_1 + 0x298) = (long)piVar5 + (ulong)uVar3;
      }
      goto LAB_00268fd0;
    }
    if (iVar4 != 0x4c534145) {
      if (iVar4 == 0x4e4c4346) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x280) = (long)piVar5 + (ulong)uVar3;
      }
      else if (iVar4 == 0x4e505346) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x260) = (long)piVar5 + (ulong)uVar3;
      }
      goto LAB_00268fd0;
    }
    *(ulong *)(param_1 + 0x2e8) = (long)piVar5 + (ulong)(uint)piVar5[5];
  }
  else if (iVar4 < 0x56444145) {
    if (iVar4 < 0x53534145) {
      if (iVar4 == 0x52544145) {
        *(ulong *)(param_1 + 0x2b8) = (long)piVar5 + (ulong)(uint)piVar5[5];
        goto LAB_00268fcc;
      }
      if (iVar4 == 0x53454145) {
        uVar3 = piVar5[5];
        *(undefined2 *)(param_1 + 1) = 0x101;
        *(ulong *)(param_1 + 0x290) = (long)piVar5 + (ulong)uVar3;
      }
      goto LAB_00268fd0;
    }
    if (iVar4 != 0x53534145) {
      if (iVar4 == 0x54454145) {
        uVar3 = piVar5[5];
        *(undefined2 *)(param_1 + 1) = 0x101;
        *(ulong *)(param_1 + 0x2a0) = (long)piVar5 + (ulong)uVar3;
      }
      goto LAB_00268fd0;
    }
    *(ulong *)(param_1 + 0x2f0) = (long)piVar5 + (ulong)(uint)piVar5[5];
  }
  else {
    if (0x564f4144 < iVar4) {
      if (iVar4 == 0x564f4145) {
        *(ulong *)(param_1 + 0x2d8) = (long)piVar5 + (ulong)(uint)piVar5[5];
        goto LAB_00268fcc;
      }
      if (iVar4 == 0x564f4346) {
        uVar3 = piVar5[5];
        *(undefined1 *)(param_1 + 3) = 1;
        *(ulong *)(param_1 + 0x270) = (long)piVar5 + (ulong)uVar3;
      }
      goto LAB_00268fd0;
    }
    if (iVar4 != 0x56444145) {
      if (iVar4 == 0x56474145) {
        *(ulong *)(param_1 + 0x2f8) = (long)piVar5 + (ulong)(uint)piVar5[5];
        goto LAB_00268fcc;
      }
      goto LAB_00268fd0;
    }
    *(ulong *)(param_1 + 0x2e0) = (long)piVar5 + (ulong)(uint)piVar5[5];
  }
LAB_00268fcc:
  *(undefined1 *)(param_1 + 1) = 1;
  goto LAB_00268fd0;
}


