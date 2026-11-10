/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c21b4; name: FUN_028c21b4
 */


void FUN_028c21b4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 0x78) != 0) || (*(long *)(param_1 + 0x80) != 0)) ||
     (*(long *)(param_1 + 0x40) != 0)) goto LAB_028c21e0;
  lVar2 = *(long *)(param_1 + 0x50);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x1e1) == '\0')) {
    lVar3 = *(long *)(param_1 + 0x18);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1e1) != '\0')) goto LAB_028c2318;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x278);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x1e1) == '\0')) goto LAB_028c21e0;
LAB_028c2318:
    lVar3 = (long)*(uint **)(lVar3 + 0x250) + (ulong)**(uint **)(lVar3 + 0x250);
    if ((lVar2 == 0) || (lVar3 != 0)) {
      if (lVar3 == 0) {
        return;
      }
      goto LAB_028c21e0;
    }
  }
  if (*(char *)(lVar2 + 0x1e1) == '\0') {
    return;
  }
LAB_028c21e0:
  if (0.0 < *(float *)(param_1 + 0x150)) {
    plVar1 = *(long **)(param_1 + 0xb0);
    lVar2 = param_1 + 0x10;
    lVar3 = param_1 + 0x90;
    if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 8),lVar3,lVar2);
    }
    plVar1 = *(long **)(param_1 + 0xd0);
    if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 8),lVar3,lVar2);
    }
    plVar1 = *(long **)(param_1 + 0xf0);
    if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 8),lVar3,lVar2);
    }
    plVar1 = *(long **)(param_1 + 0x110);
    if ((plVar1 == (long *)0x0) || ((char)plVar1[1] != '\0')) {
      plVar1 = *(long **)(param_1 + 0x130);
    }
    else {
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 8),lVar3,lVar2);
      plVar1 = *(long **)(param_1 + 0x130);
    }
    if ((plVar1 != (long *)0x0) && ((char)plVar1[1] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x028c22e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 8),lVar3,lVar2);
      return;
    }
  }
  return;
}


