/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150da0; name: FUN_00150da0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00150da0(long param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (0 < param_2) {
    plVar2 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
    uVar1 = *(uint *)(plVar2 + 1);
    goto joined_r0x00150df0;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00150df0;
    }
    plVar5 = (long *)**(long **)(param_1 + 0x20);
    plVar2 = &DAT_039c5c28;
    if ((int)plVar5[1] != 0x16) {
      lVar3 = *plVar5;
      plVar2 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        plVar2 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      uVar1 = *(uint *)(plVar2 + 1);
      goto joined_r0x00150df0;
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  uVar1 = *(uint *)(plVar2 + 1);
joined_r0x00150df0:
  if ((uVar1 & 0xf) == 3) {
    FUN_00162a50(param_1);
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_0015dc70(param_1);
    }
    if (param_2 < 1) {
      if (param_2 < -0xf4627) {
        if (param_2 == -0xf4628) {
          plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else {
          plVar5 = (long *)**(long **)(param_1 + 0x20);
          plVar2 = &DAT_039c5c28;
          if ((int)plVar5[1] != 0x16) {
            lVar3 = *plVar5;
            plVar2 = &DAT_039c5c28;
            if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
              plVar2 = (long *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
            }
          }
        }
      }
      else {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar2 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
      if (*(long **)(param_1 + 0x10) <= plVar2) {
        plVar2 = &DAT_039c5c28;
      }
    }
  }
  else if ((uVar1 & 0xf) != 4) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = 0;
    }
    return 0;
  }
  if (param_3 != (ulong *)0x0) {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 8) == '\x04') {
      uVar4 = (ulong)*(byte *)(lVar3 + 0xb);
    }
    else {
      uVar4 = *(ulong *)(lVar3 + 0x10);
    }
    *param_3 = uVar4;
  }
  return *plVar2 + 0x18;
}


