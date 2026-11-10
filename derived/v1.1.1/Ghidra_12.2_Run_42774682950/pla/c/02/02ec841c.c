/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec841c; name: FUN_02ec841c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ec841c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((*(long *)(param_1 + 0x148) == 0) && (*(long *)(param_1 + 0x150) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x3c);
    puVar3 = (undefined8 *)FUN_02f59e30(5,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0x2b00000000;
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined8 **)(param_1 + 0x150) = puVar3;
      lVar4 = FUN_02f59e40(5,(_DAT_042ab268 & 0xffff) * (uVar1 & 0xff) * 2,0x10);
      uVar2 = _DAT_042ab268;
      if (lVar4 != 0) {
        plVar6 = *(long **)(param_1 + 0x150);
        *plVar6 = lVar4;
        *(short *)(plVar6 + 2) = (short)uVar2;
        *(undefined2 *)((long)plVar6 + 0x12) = 0;
        *(uint *)(plVar6 + 1) = uVar1;
        puVar3 = (undefined8 *)FUN_02ea5b0c();
        uVar5 = (**(code **)*puVar3)(puVar3,param_2,DAT_042ab258,0x10,1,uVar1);
        *(undefined8 *)(param_1 + 0x148) = uVar5;
      }
    }
  }
  return;
}


