/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c880; name: FUN_0083c880
 */


undefined8 FUN_0083c880(long param_1)

{
  undefined *puVar1;
  
  FUN_0082b2e8(*(undefined8 *)PTR_DAT_04377550,0);
  puVar1 = PTR_FUN_04377ee0;
  *(char **)(param_1 + 0x40) = "CreateMeshJob::WaitSendMonitoringData";
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0x320004;
}


