/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2ad44; name: FUN_02c2ad44
 */


void FUN_02c2ad44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x200));
  lVar5 = *(long *)(param_1 + 0x1f8);
  if (lVar5 != 0) {
    pcVar4 = *(code **)(lVar5 + 0x68);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x70) = 0;
      *(undefined8 *)(lVar5 + 0x78) = 0;
      *(undefined8 *)(lVar5 + 0x60) = 0;
      *(undefined8 *)(lVar5 + 0x68) = 0;
      (*pcVar4)(lVar5 + 0x80);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,lVar5 + 0x80);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      *(undefined8 *)(lVar5 + 0x70) = param_2[2];
      *(undefined8 *)(lVar5 + 0x78) = uVar3;
      *(undefined8 *)(lVar5 + 0x60) = uVar1;
      *(undefined8 *)(lVar5 + 0x68) = uVar2;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x200));
  return;
}


