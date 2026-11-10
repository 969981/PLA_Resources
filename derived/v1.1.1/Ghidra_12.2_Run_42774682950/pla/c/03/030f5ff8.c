/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f5ff8; name: FUN_030f5ff8
 */


void FUN_030f5ff8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x490);
  uVar1 = FUN_032cf5b0(0x60);
  FUN_032be30c(uVar1,*(undefined8 *)(param_2 + 0x4a0));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(long *)(param_1 + 0x358) = param_2;
  *(long *)(param_1 + 0x348) = param_2;
  FUN_032be540(param_1 + 0x6c0,uVar1,"hknpParticleSimulationThreadContext::m_commandBlockStream");
  lVar2 = FUN_032cf5b0(0x40);
  FUN_032c0044();
  *(long *)(param_1 + 0x7c0) = lVar2;
  FUN_032bf508(lVar2 + 0x18,*(undefined8 *)(param_1 + 0x10),param_1 + 0x6c0);
  *(undefined1 *)(param_1 + 0x388) = 0;
  return;
}


