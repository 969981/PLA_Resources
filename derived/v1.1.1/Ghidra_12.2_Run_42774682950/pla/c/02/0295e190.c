/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295e190; name: FUN_0295e190
 */


void FUN_0295e190(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_0294cb58(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  memcpy(*(void **)(param_1 + 0x28),*(void **)(param_2 + 0x28),0x1e8);
  FUN_02961848(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  FUN_02963088(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
  FUN_02964ff0(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_2 + 0x88));
  puVar6 = *(undefined8 **)(param_2 + 0xa8);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  uVar2 = *(undefined2 *)(puVar6 + 2);
  uVar9 = puVar6[1];
  *puVar3 = *puVar6;
  puVar3[1] = uVar9;
  *(undefined2 *)(puVar3 + 2) = uVar2;
  uVar9 = *(undefined8 *)((long)puVar6 + 0x12);
  uVar10 = *(undefined8 *)((long)puVar6 + 0x1a);
  uVar11 = *(undefined8 *)((long)puVar6 + 0x22);
  puVar3[5] = puVar6[5];
  *(undefined8 *)((long)puVar3 + 0x22) = uVar11;
  *(undefined8 *)((long)puVar3 + 0x1a) = uVar10;
  *(undefined8 *)((long)puVar3 + 0x12) = uVar9;
  memcpy(*(void **)(param_1 + 200),*(void **)(param_2 + 200),0x14f);
  puVar3 = *(undefined8 **)(param_1 + 0x108);
  uVar1 = *(undefined4 *)(*(undefined8 **)(param_2 + 0x108) + 1);
  *puVar3 = **(undefined8 **)(param_2 + 0x108);
  *(undefined4 *)(puVar3 + 1) = uVar1;
  memcpy((void *)(*(long *)(param_1 + 0x128) + 8),(void *)(*(long *)(param_2 + 0x128) + 8),0xf0);
  *(undefined4 *)(*(long *)(param_1 + 0x148) + 8) = *(undefined4 *)(*(long *)(param_2 + 0x148) + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x168);
  uVar2 = *(undefined2 *)(*(undefined8 **)(param_2 + 0x168) + 1);
  *puVar3 = **(undefined8 **)(param_2 + 0x168);
  *(undefined2 *)(puVar3 + 1) = uVar2;
  lVar7 = *(long *)(param_2 + 0x188);
  lVar4 = *(long *)(param_1 + 0x188);
  *(undefined1 *)(lVar4 + 0x10) = *(undefined1 *)(lVar7 + 0x10);
  *(undefined1 *)(lVar4 + 0x11) = *(undefined1 *)(lVar7 + 0x11);
  *(undefined1 *)(lVar4 + 0x12) = *(undefined1 *)(lVar7 + 0x12);
  *(undefined1 *)(lVar4 + 0x13) = *(undefined1 *)(lVar7 + 0x13);
  *(undefined1 *)(lVar4 + 0x14) = *(undefined1 *)(lVar7 + 0x14);
  *(undefined1 *)(lVar4 + 0x15) = *(undefined1 *)(lVar7 + 0x15);
  *(undefined1 *)(lVar4 + 0x16) = *(undefined1 *)(lVar7 + 0x16);
  *(undefined1 *)(lVar4 + 0x17) = *(undefined1 *)(lVar7 + 0x17);
  *(undefined1 *)(lVar4 + 0x18) = *(undefined1 *)(lVar7 + 0x18);
  *(undefined1 *)(lVar4 + 0x19) = *(undefined1 *)(lVar7 + 0x19);
  *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 8) = *(undefined2 *)(*(long *)(param_2 + 0x1a8) + 8);
  lVar7 = *(long *)(param_2 + 0x1c8);
  lVar4 = *(long *)(param_1 + 0x1c8);
  uVar10 = *(undefined8 *)(lVar7 + 0x18);
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
  *(undefined8 *)(lVar4 + 0x10) = uVar9;
  *(undefined8 *)(lVar4 + 0x18) = uVar10;
  uVar9 = *(undefined8 *)(lVar7 + 0x78);
  uVar10 = *(undefined8 *)(lVar7 + 0x80);
  uVar11 = *(undefined8 *)(lVar7 + 0x90);
  *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar7 + 0x88);
  *(undefined8 *)(lVar4 + 0x90) = uVar11;
  *(undefined8 *)(lVar4 + 0x78) = uVar9;
  *(undefined8 *)(lVar4 + 0x80) = uVar10;
  uVar9 = *(undefined8 *)(lVar7 + 0x58);
  uVar10 = *(undefined8 *)(lVar7 + 0x60);
  uVar11 = *(undefined8 *)(lVar7 + 0x70);
  *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar7 + 0x68);
  *(undefined8 *)(lVar4 + 0x70) = uVar11;
  *(undefined8 *)(lVar4 + 0x58) = uVar9;
  *(undefined8 *)(lVar4 + 0x60) = uVar10;
  uVar9 = *(undefined8 *)(lVar7 + 0x38);
  uVar10 = *(undefined8 *)(lVar7 + 0x40);
  uVar11 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar7 + 0x48);
  *(undefined8 *)(lVar4 + 0x50) = uVar11;
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  *(undefined8 *)(lVar4 + 0x40) = uVar10;
  uVar10 = *(undefined8 *)(lVar7 + 0x30);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
  *(undefined8 *)(lVar4 + 0x28) = uVar9;
  *(undefined8 *)(lVar4 + 0x30) = uVar10;
  uVar9 = *(undefined8 *)(lVar7 + 0xa0);
  *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar7 + 0x98);
  *(undefined8 *)(lVar4 + 0xa0) = uVar9;
  uVar9 = *(undefined8 *)(lVar7 + 0xa8);
  uVar10 = *(undefined8 *)(lVar7 + 0xb0);
  uVar11 = *(undefined8 *)(lVar7 + 0xc0);
  *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar4 + 0xc0) = uVar11;
  *(undefined8 *)(lVar4 + 0xa8) = uVar9;
  *(undefined8 *)(lVar4 + 0xb0) = uVar10;
  puVar5 = *(undefined4 **)(param_2 + 0x1e8);
  puVar8 = *(undefined4 **)(param_1 + 0x1e8);
  *puVar8 = *puVar5;
  *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar8[3] = puVar5[3];
  *(undefined1 *)((long)puVar8 + 5) = *(undefined1 *)((long)puVar5 + 5);
  puVar8[4] = puVar5[4];
  *(undefined1 *)((long)puVar8 + 6) = *(undefined1 *)((long)puVar5 + 6);
  puVar8[5] = puVar5[5];
  *(undefined1 *)((long)puVar8 + 7) = *(undefined1 *)((long)puVar5 + 7);
  puVar8[6] = puVar5[6];
  *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar5 + 2);
  puVar8[7] = puVar5[7];
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  uVar9 = *(undefined8 *)(param_2 + 0x210);
  uVar10 = *(undefined8 *)(param_2 + 0x218);
  uVar11 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = uVar11;
  *(undefined8 *)(param_1 + 0x218) = uVar10;
  *(undefined8 *)(param_1 + 0x210) = uVar9;
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_2 + 0x230);
  *(undefined1 *)(param_1 + 0x232) = *(undefined1 *)(param_2 + 0x232);
  return;
}


