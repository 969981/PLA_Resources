/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c248c; name: FUN_028c248c
 */


void FUN_028c248c(float param_1,long param_2)

{
  undefined *puVar1;
  float fVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  
  if (((*(long *)(param_2 + 0x78) != 0) || (*(long *)(param_2 + 0x80) != 0)) ||
     (*(long *)(param_2 + 0x40) != 0)) goto LAB_028c24bc;
  lVar5 = *(long *)(param_2 + 0x50);
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x1e1) == '\0')) {
    lVar6 = *(long *)(param_2 + 0x18);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x1e1) != '\0')) goto LAB_028c2654;
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x278);
    if ((lVar6 == 0) || (*(char *)(lVar6 + 0x1e1) == '\0')) goto LAB_028c24bc;
LAB_028c2654:
    lVar6 = (long)*(uint **)(lVar6 + 0x250) + (ulong)**(uint **)(lVar6 + 0x250);
    if ((lVar5 == 0) || (lVar6 != 0)) {
      if (lVar6 == 0) {
        return;
      }
      goto LAB_028c24bc;
    }
  }
  if (*(char *)(lVar5 + 0x1e1) == '\0') {
    return;
  }
LAB_028c24bc:
  puVar7 = (uint *)(param_2 + 0x90);
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x94));
  fVar8 = *(float *)(param_2 + 0x9c);
  fVar2 = fVar8;
  if (*(char *)(param_2 + 0xa9) != '\0') {
    fVar2 = (float)(int)fVar8;
  }
  *(undefined1 *)(param_2 + 0xa8) = 0;
  *(float *)(param_2 + 0x9c) = fVar8 + *(float *)(param_2 + 0x98) * fVar9 * param_1;
  lVar5 = param_2 + 0x10;
  pcVar4 = (code *)(&PTR_LAB_04272fd8)
                   [(ulong)(*(float *)(param_2 + 0x98) < 0.0) * 4 + (ulong)*puVar7 * 2];
  puVar1 = (&PTR_LAB_04272fd8 + (ulong)(*(float *)(param_2 + 0x98) < 0.0) * 4 + (ulong)*puVar7 * 2)
           [1];
  if (((ulong)puVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)puVar7 + ((long)puVar1 >> 1)));
  }
  (*pcVar4)();
  plVar3 = *(long **)(param_2 + 0xb0);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar7,lVar5);
  }
  plVar3 = *(long **)(param_2 + 0xd0);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar7,lVar5);
  }
  plVar3 = *(long **)(param_2 + 0xf0);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar7,lVar5);
  }
  plVar3 = *(long **)(param_2 + 0x110);
  if ((plVar3 == (long *)0x0) || ((char)plVar3[1] != '\0')) {
    plVar3 = *(long **)(param_2 + 0x130);
  }
  else {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar7,lVar5);
    plVar3 = *(long **)(param_2 + 0x130);
  }
  if ((plVar3 == (long *)0x0) || ((char)plVar3[1] != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028c261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar7,lVar5);
  return;
}


