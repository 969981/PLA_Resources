/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c1ac; name: FUN_02e7c1ac
 */


void FUN_02e7c1ac(long param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5,
                 uint param_6,int param_7)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((~*param_3 & 0xf0) == 0 || (*param_3 & 0x80) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  plVar2 = (long *)FUN_02f59e30(0,0x20);
  if (plVar2 == (long *)0x0) {
    return;
  }
  *plVar2 = param_1;
  *(undefined4 *)(plVar2 + 1) = *(undefined4 *)param_3;
  *(undefined4 *)((long)plVar2 + 0xc) = param_4;
  *(uint *)(plVar2 + 2) = param_5 & 0x3fffffff | (param_6 & 1) << 0x1e | param_7 << 0x1f;
  plVar2[3] = 0;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  plVar3 = param_2 + 1;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    uVar7 = *(uint *)(lVar4 + 0xc);
    lVar5 = lVar4;
    if (uVar7 <= uVar1) {
      lVar6 = 0;
      do {
        if (uVar7 == uVar1) {
          lVar5 = lVar4;
          if ((((*(uint *)(lVar4 + 0x10) >> 0x1e & 1) != 0) &&
              ((*(byte *)((long)plVar2 + 0x13) >> 6 & 1) == 0)) ||
             ((-1 < (int)*(uint *)(lVar4 + 0x10) && ((int)plVar2[2] < 0)))) break;
        }
        lVar5 = *(long *)(lVar4 + 0x18);
        lVar6 = lVar4;
        if (lVar5 == 0) break;
        uVar7 = *(uint *)(lVar5 + 0xc);
        lVar4 = lVar5;
      } while (uVar7 <= uVar1);
      plVar2[3] = lVar5;
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar6 + 0x18);
      }
      *plVar3 = (long)plVar2;
      goto joined_r0x02e7c2ec;
    }
  }
  plVar2[3] = lVar4;
  *plVar3 = (long)plVar2;
joined_r0x02e7c2ec:
  if (lVar5 == 0) {
    *param_2 = plVar2;
  }
  return;
}


