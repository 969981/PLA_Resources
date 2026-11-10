/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008076f8; name: FUN_008076f8
 */


undefined8 FUN_008076f8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int local_30 [4];
  
  uVar1 = FUN_007f6c84(*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = FUN_007f63fc(uVar2);
    if ((((uVar1 & 1) != 0) || (uVar1 = FUN_007f6c84(uVar2), (uVar1 & 1) != 0)) &&
       (*(char *)(param_1 + 0x60) != *(char *)(param_1 + 0x61))) {
      FUN_00807914(local_30,*(undefined8 *)(param_1 + 0x68));
      if (local_30[0] == 0) {
        *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_1 + 0x61);
        FUN_007e5e70(*(undefined8 *)(param_1 + 0x68),1);
        *(undefined **)(param_1 + 0x30) = PTR_FUN_04377878;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumJob::WaitUpdatePlayerNum";
        return 0;
      }
      return 5;
    }
  }
  return 1;
}


