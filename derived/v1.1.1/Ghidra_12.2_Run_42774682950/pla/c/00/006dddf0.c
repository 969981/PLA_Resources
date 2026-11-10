/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dddf0; name: FUN_006dddf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dddf0(undefined4 *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_FUN_04373078;
  pcVar2 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar6 = s_Failed_streaming_RPC_keep_alive__0398faf2._24_8_;
  uVar5 = s_Failed_streaming_RPC_keep_alive__0398faf2._16_8_;
  uVar4 = s_Failed_streaming_RPC_keep_alive__0398faf2._0_8_;
  *(undefined8 *)(pcVar2 + 8) = s_Failed_streaming_RPC_keep_alive__0398faf2._8_8_;
  *(undefined8 *)pcVar2 = uVar4;
  *(undefined8 *)(pcVar2 + 0x18) = uVar6;
  *(undefined8 *)(pcVar2 + 0x10) = uVar5;
  pcVar2[0x20] = '\0';
  *param_1 = 0xe;
  puVar3 = (undefined8 *)FUN_002e2e80(puVar1,0x30);
  uVar4 = _DAT_03889710;
  *(undefined8 *)(param_1 + 4) = _UNK_03889718;
  *(undefined8 *)(param_1 + 2) = uVar4;
  puVar1 = PTR_LAB_04373088;
  *(undefined8 **)(param_1 + 6) = puVar3;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar4 = *(undefined8 *)pcVar2;
  uVar6 = *(undefined8 *)(pcVar2 + 0x18);
  uVar5 = *(undefined8 *)(pcVar2 + 0x10);
  puVar3[1] = *(undefined8 *)(pcVar2 + 8);
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_002e2ea0(puVar1,pcVar2);
  return;
}


