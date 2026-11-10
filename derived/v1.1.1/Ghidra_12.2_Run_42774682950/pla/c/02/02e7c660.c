/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c660; name: FUN_02e7c660
 */


void FUN_02e7c660(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x70) & 5) != 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_02f59e30(0,0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  *(undefined8 *)(puVar2 + 2) = 0;
  *puVar2 = uVar1;
  puVar2[1] = param_3;
  plVar3 = (long *)(param_1 + 0x68);
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar4;
    if (*(uint *)(lVar4 + 4) <= param_3) {
      do {
        lVar5 = lVar4;
        lVar6 = *(long *)(lVar5 + 8);
        if (lVar6 == 0) {
          lVar4 = 0;
          goto LAB_02e7c710;
        }
        lVar4 = lVar6;
      } while (*(uint *)(lVar6 + 4) <= param_3);
LAB_02e7c710:
      *(long *)(puVar2 + 2) = lVar4;
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 8);
      }
      *plVar3 = (long)puVar2;
      goto joined_r0x02e7c704;
    }
  }
  *(long *)(puVar2 + 2) = lVar4;
  *plVar3 = (long)puVar2;
joined_r0x02e7c704:
  if (lVar6 == 0) {
    *(undefined4 **)(param_1 + 0x60) = puVar2;
  }
  return;
}


