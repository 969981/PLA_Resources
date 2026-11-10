/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54d94; name: FUN_02e54d94
 */


void FUN_02e54d94(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)**(long **)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) < 2) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(*(long **)(param_1 + 0x28))[1];
  }
  puVar1 = puVar5;
  if (puVar2[8] == param_2) {
    puVar1 = puVar2;
    puVar2 = puVar5;
  }
  FUN_02e547ac(&local_40,param_1,puVar1[8],param_4,puVar2[8]);
  local_50 = local_40;
  local_48 = local_38;
  local_60 = *(undefined4 *)(puVar1 + 1);
  local_68 = *puVar1;
  local_54 = *(undefined4 *)((long)puVar1 + 0x14);
  local_5c = *(undefined8 *)((long)puVar1 + 0xc);
  lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x38);
  lVar4 = *(long *)(lVar3 + 0x10);
  local_78 = *(undefined4 *)(lVar4 + 0x78);
  local_74 = *(undefined4 *)(lVar4 + 0x7c);
  uStack_70 = *(undefined4 *)(lVar4 + 0x80);
  FUN_02e595ec(*(undefined4 *)(param_3 + 0x58),param_1 + 0x78,&local_78,param_3 + 0x30,
               *(undefined8 *)(*(long *)(lVar3 + 0x28) + 0xa8),&local_68,
               *(undefined8 *)(param_1 + 0x40),puVar1[8],param_1 + 0x88);
  return;
}


