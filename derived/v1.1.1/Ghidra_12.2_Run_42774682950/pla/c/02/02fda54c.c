/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fda54c; name: FUN_02fda54c
 */


void FUN_02fda54c(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x110,0);
  lVar3 = DAT_04434b38;
  uVar1 = *(undefined4 *)(DAT_04434b38 + 0x8a8);
  uVar2 = *(undefined4 *)(DAT_04434b38 + 0x8ac);
  *puVar5 = *(undefined8 *)(DAT_04434b38 + 0x8a0);
  *(undefined4 *)(puVar5 + 1) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x8b8);
  uVar2 = *(undefined4 *)(lVar3 + 0x8bc);
  puVar5[2] = *(undefined8 *)(lVar3 + 0x8b0);
  *(undefined4 *)(puVar5 + 3) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x8c8);
  uVar2 = *(undefined4 *)(lVar3 + 0x8cc);
  puVar5[4] = *(undefined8 *)(lVar3 + 0x8c0);
  *(undefined4 *)(puVar5 + 5) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x2c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x8d8);
  uVar2 = *(undefined4 *)(lVar3 + 0x8dc);
  puVar5[6] = *(undefined8 *)(lVar3 + 0x8d0);
  *(undefined4 *)(puVar5 + 7) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x3c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x8e8);
  uVar2 = *(undefined4 *)(lVar3 + 0x8ec);
  puVar5[8] = *(undefined8 *)(lVar3 + 0x8e0);
  *(undefined4 *)(puVar5 + 9) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x4c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x8f8);
  uVar2 = *(undefined4 *)(lVar3 + 0x8fc);
  puVar5[10] = *(undefined8 *)(lVar3 + 0x8f0);
  *(undefined4 *)(puVar5 + 0xb) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x5c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x908);
  uVar2 = *(undefined4 *)(lVar3 + 0x90c);
  puVar5[0xc] = *(undefined8 *)(lVar3 + 0x900);
  *(undefined4 *)(puVar5 + 0xd) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x6c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x918);
  uVar2 = *(undefined4 *)(lVar3 + 0x91c);
  puVar5[0xe] = *(undefined8 *)(lVar3 + 0x910);
  *(undefined4 *)(puVar5 + 0xf) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x7c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x928);
  uVar2 = *(undefined4 *)(lVar3 + 0x92c);
  puVar5[0x10] = *(undefined8 *)(lVar3 + 0x920);
  *(undefined4 *)(puVar5 + 0x11) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x8c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x938);
  uVar2 = *(undefined4 *)(lVar3 + 0x93c);
  puVar5[0x12] = *(undefined8 *)(lVar3 + 0x930);
  *(undefined4 *)(puVar5 + 0x13) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x9c) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x948);
  uVar2 = *(undefined4 *)(lVar3 + 0x94c);
  puVar5[0x14] = *(undefined8 *)(lVar3 + 0x940);
  *(undefined4 *)(puVar5 + 0x15) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xac) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x958);
  uVar2 = *(undefined4 *)(lVar3 + 0x95c);
  puVar5[0x16] = *(undefined8 *)(lVar3 + 0x950);
  *(undefined4 *)(puVar5 + 0x17) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xbc) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x968);
  uVar2 = *(undefined4 *)(lVar3 + 0x96c);
  puVar5[0x18] = *(undefined8 *)(lVar3 + 0x960);
  *(undefined4 *)(puVar5 + 0x19) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xcc) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x978);
  uVar2 = *(undefined4 *)(lVar3 + 0x97c);
  puVar5[0x1a] = *(undefined8 *)(lVar3 + 0x970);
  *(undefined4 *)(puVar5 + 0x1b) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xdc) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x988);
  uVar2 = *(undefined4 *)(lVar3 + 0x98c);
  puVar5[0x1c] = *(undefined8 *)(lVar3 + 0x980);
  *(undefined4 *)(puVar5 + 0x1d) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xec) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x998);
  uVar2 = *(undefined4 *)(lVar3 + 0x99c);
  puVar5[0x1e] = *(undefined8 *)(lVar3 + 0x990);
  *(undefined4 *)(puVar5 + 0x1f) = uVar1;
  *(undefined4 *)((long)puVar5 + 0xfc) = uVar2;
  uVar1 = *(undefined4 *)(lVar3 + 0x9a8);
  uVar2 = *(undefined4 *)(lVar3 + 0x9ac);
  puVar5[0x20] = *(undefined8 *)(lVar3 + 0x9a0);
  *(undefined4 *)(puVar5 + 0x21) = uVar1;
  *(undefined4 *)((long)puVar5 + 0x10c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = param_2;
  *param_1 = (long)puVar5;
  return;
}


