/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daedf8; name: FUN_00daedf8
 */


uint FUN_00daedf8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  
  uVar2 = FUN_00dafc80();
  FUN_00dafb54(param_1,&DAT_03907748,uVar2);
  FUN_00db5af8(auStack_38);
  FUN_00dafbe8(param_1,&DAT_0391cd5f,local_30);
  uVar2 = FUN_00db0104(param_1);
  FUN_00dafb54(param_1,&DAT_038b647e,uVar2);
  uVar2 = FUN_00db01e8(param_1);
  FUN_00dafb54(param_1,&DAT_0388dce8,uVar2);
  uVar2 = FUN_00db02cc(param_1);
  FUN_00dafb54(param_1,"bottoms",uVar2);
  uVar2 = FUN_00db03b0(param_1);
  FUN_00dafb54(param_1,"dress",uVar2);
  uVar2 = FUN_00db0494(param_1);
  FUN_00dafb54(param_1,"shoes",uVar2);
  uVar2 = FUN_00db0578(param_1);
  FUN_00dafb54(param_1,"glasses",uVar2);
  uVar2 = FUN_00db0740(param_1);
  FUN_00dafb54(param_1,"contact",uVar2);
  uVar2 = FUN_00db065c(param_1);
  FUN_00dafb54(param_1,"eyebrow_color",uVar2);
  uVar1 = FUN_00dac640(param_1);
  return uVar1 & 1;
}


