/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd8bf8; name: FUN_02fd8bf8
 */


void FUN_02fd8bf8(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x90,0);
  *puVar3 = &PTR_LAB_042ba250;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 1;
  *(undefined2 *)(puVar3 + 3) = 0x201;
  *(undefined8 *)((long)puVar3 + 0x6d) = 0;
  *(undefined2 *)(puVar3 + 0xe) = 0x7f7f;
  *(undefined8 *)((long)puVar3 + 0x3d) = 0;
  *(undefined8 *)((long)puVar3 + 0x45) = 0;
  *(undefined8 *)((long)puVar3 + 0x4d) = 0;
  *(undefined8 *)((long)puVar3 + 0x1d) = 0;
  *(undefined8 *)((long)puVar3 + 0x25) = 0;
  *(undefined8 *)((long)puVar3 + 0x2d) = 0;
  *(undefined8 *)((long)puVar3 + 0x35) = 0;
  *(undefined8 *)((long)puVar3 + 0x55) = 0;
  *(undefined8 *)((long)puVar3 + 0x5d) = 0;
  *(undefined8 *)((long)puVar3 + 0x65) = 0;
  *(undefined8 *)((long)puVar3 + 0x75) = 0;
  *(undefined8 *)((long)puVar3 + 0x7d) = 0;
  *(undefined8 *)((long)puVar3 + 0x85) = 0;
  *(undefined4 *)((long)puVar3 + 0x8c) = 0;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  puVar3[5] = 0;
  *(float *)(puVar3 + 4) = param_2;
  puVar3[8] = 0x100000040;
  puVar3[9] = 0;
  *(undefined2 *)((long)puVar3 + 0x1a) = 0x11;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  uVar5 = param_3[1];
  puVar3[0x10] = *param_3;
  *(int *)(puVar3 + 0x11) = (int)uVar5;
  *(short *)(puVar3 + 0xe) = (short)((uint)(param_2 * DAT_042b0ab0 * 1.0039062) >> 0x10);
  puVar3[1] = 0x90;
  *param_1 = puVar3;
  return;
}


