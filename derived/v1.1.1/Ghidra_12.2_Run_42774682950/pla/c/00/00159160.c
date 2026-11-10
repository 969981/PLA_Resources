/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159160; name: FUN_00159160
 */


char * FUN_00159160(long param_1,long param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar4;
    *plVar4 = *(long *)(param_1 + 0x38) + plVar4[7];
    plVar4[7] = lVar5 - *(long *)(param_1 + 0x38);
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x46) {
      pcVar3 = (char *)FUN_0015ca20(*(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18),param_3,0
                                   );
      cVar1 = *(char *)(param_1 + 0xc);
      goto joined_r0x00159320;
    }
LAB_00159314:
    pcVar3 = (char *)0x0;
    cVar1 = *(char *)(param_1 + 0xc);
    goto joined_r0x00159320;
  }
  plVar4 = *(long **)(param_2 + 0x78);
  if ((*(byte *)((long)plVar4 + 0x42) >> 1 & 1) == 0) {
    plVar6 = (long *)(*plVar4 + 0x10);
LAB_001591c0:
    if (*(long **)(param_1 + 0x20) == plVar4) {
      plVar4 = (long *)(param_1 + 0x10);
    }
    else {
      plVar4 = (long *)plVar4[3];
    }
    pcVar3 = (char *)0x0;
    if ((0 < param_3) && (pcVar3 = (char *)0x0, (long)param_3 <= *plVar4 - (long)plVar6 >> 4)) {
      pcVar3 = "(*temporary)";
LAB_00159278:
      param_3 = param_3 + -1;
      goto LAB_0015927c;
    }
  }
  else {
    if (-1 < param_3) {
      plVar6 = (long *)plVar4[4];
      pcVar3 = (char *)FUN_0015ca20(*(long *)(*(long *)*plVar4 + 0x18),param_3,
                                    (int)((ulong)(plVar4[5] -
                                                 *(long *)(*(long *)(*(long *)*plVar4 + 0x18) + 0x38
                                                          )) >> 2) + -1);
      if (pcVar3 == (char *)0x0) goto LAB_001591c0;
      goto LAB_00159278;
    }
    plVar6 = (long *)*plVar4;
    param_3 = -param_3;
    bVar2 = *(byte *)(*(long *)(*plVar6 + 0x18) + 10);
    if ((int)((int)((ulong)(plVar4[4] - (long)plVar6) >> 4) - (uint)bVar2) <= param_3)
    goto LAB_00159314;
    plVar6 = plVar6 + (ulong)bVar2 * 2;
    pcVar3 = "(*vararg)";
LAB_0015927c:
    plVar4 = *(long **)(param_1 + 0x10);
    lVar5 = (plVar6 + (long)param_3 * 2)[1];
    *plVar4 = plVar6[(long)param_3 * 2];
    plVar4[1] = lVar5;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  cVar1 = *(char *)(param_1 + 0xc);
joined_r0x00159320:
  if (cVar1 == '\x01') {
    plVar4 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar4;
    *plVar4 = *(long *)(param_1 + 0x38) + plVar4[7];
    plVar4[7] = lVar5 - *(long *)(param_1 + 0x38);
  }
  return pcVar3;
}


