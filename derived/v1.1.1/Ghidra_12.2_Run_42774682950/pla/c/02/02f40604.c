/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40604; name: FUN_02f40604
 */


void FUN_02f40604(float param_1,long param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  undefined4 local_34;
  
  fVar7 = *(float *)(param_2 + 0x68) + param_1 * *(float *)(param_2 + 0x58);
  iVar2 = *(int *)(param_2 + 100);
  *(float *)(param_2 + 0x68) = fVar7 - (float)(int)fVar7;
  *(int *)(param_2 + 100) = iVar2 + (int)fVar7;
  lVar6 = *(long *)(param_2 + 0x38);
  while( true ) {
    if (((lVar6 == 0) && ((*(byte *)(param_2 + 0x6c) >> 2 & 1) == 0)) ||
       (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60))) {
      return;
    }
    uVar3 = (uint)local_34 >> 0x10;
    local_34 = CONCAT22((short)uVar3,0xff00);
    uVar4 = FUN_02f4070c(param_2,&local_34);
    if (((uVar4 & 1) != 0) &&
       (puVar5 = (undefined4 *)FUN_02f59e30(0,0x18), puVar5 != (undefined4 *)0x0)) {
      *puVar5 = local_34;
      *(undefined8 *)(puVar5 + 1) = 0;
      *(undefined8 *)(puVar5 + 4) = 0;
      puVar5[1] = *(float *)(param_2 + 0x54) * (float)(uint)(*(int *)(param_2 + 0x60) - iVar2);
      puVar5[2] = *(undefined4 *)(param_2 + 0x5c);
      *(undefined8 *)(puVar5 + 4) = 0;
      plVar1 = param_3 + 1;
      if (param_3[1] != 0) {
        plVar1 = (long *)(*param_3 + 0x10);
      }
      *plVar1 = (long)puVar5;
      *param_3 = (long)puVar5;
    }
    uVar4 = FUN_02f404bc(param_2);
    if ((uVar4 & 1) == 0) break;
    lVar6 = *(long *)(param_2 + 0x38);
  }
  return;
}


