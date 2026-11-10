/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a320; name: FUN_0015a320
 */


void FUN_0015a320(long param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(*(long *)(param_1 + 0x58) + 0x140) = param_2;
                    /* WARNING: Subroutine does not return */
    _longjmp((__jmp_buf_tag *)(*(long *)(param_1 + 0x58) + 8),1);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  *(char *)(param_1 + 0xc) = (char)param_2;
  lVar3 = *(long *)(lVar5 + 200);
  if (*(long *)(lVar3 + 0x58) != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 2;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    *puVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar4[1] = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_0015a320(*(undefined8 *)(lVar5 + 200));
  }
  if (*(long *)(lVar5 + 0xc0) == 0) goto LAB_0015a408;
  plVar6 = *(long **)(param_1 + 0x10);
  if (param_2 == 6) {
    lVar3 = FUN_0016d720(param_1,"error in error handling",0x17);
    *plVar6 = lVar3;
    bVar2 = *(byte *)(lVar3 + 8);
LAB_0015a3cc:
    *(uint *)(plVar6 + 1) = bVar2 | 0x40;
  }
  else {
    if (param_2 == 4) {
      lVar3 = *(long *)(lVar5 + 0xd8);
      *plVar6 = lVar3;
      bVar2 = *(byte *)(lVar3 + 8);
      goto LAB_0015a3cc;
    }
    *plVar6 = plVar6[-2];
    plVar6[1] = plVar6[-1];
  }
  plVar6 = plVar6 + 2;
  *(long **)(param_1 + 0x10) = plVar6;
  if (*(long **)(*(long *)(param_1 + 0x20) + 8) < plVar6) {
    *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar6;
  }
  (**(code **)(lVar5 + 0xc0))(param_1);
LAB_0015a408:
                    /* WARNING: Subroutine does not return */
  abort();
}


