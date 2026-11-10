/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085cc80; name: FUN_0085cc80
 */


void FUN_0085cc80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1378));
  lVar4 = *(long *)(param_2 + 0x1308);
  lVar3 = *(long *)(param_2 + 0x1300);
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar4 + 0x18);
  FUN_007e346c(lVar3 + 0x60,param_3);
  FUN_007e346c(*(long *)(param_2 + 0x1300) + 0x80,param_4);
  *(undefined1 *)(*(long *)(param_2 + 0x1300) + 0xa9) = *(undefined1 *)(param_2 + 0x1371);
  uVar1 = FUN_007f10e8(param_2 + 0xb8);
  plVar2 = (long *)FUN_0085e934(lVar4,uVar1);
  if (plVar2 == (long *)0x0) {
    local_50[0] = 0x4c11;
  }
  else {
    if (*plVar2 == *(long *)(lVar4 + 0x18)) {
      *(undefined1 *)(param_2 + 0x1370) = 1;
    }
    else {
      if (*(short *)(param_2 + 0x114e) != 0) {
        iVar5 = 0;
        plVar2 = (long *)FUN_0085e8d4(*(undefined8 *)(param_2 + 0x1308),0);
        do {
          if ((((plVar2 == (long *)0x0) || (*plVar2 == -1)) || (*(long *)(lVar4 + 0x18) == *plVar2))
             || ((int)plVar2[2] != 0)) {
            if ((uint)*(ushort *)(param_2 + 0x114e) <= iVar5 + 1U) break;
          }
          else {
            FUN_0085f380(*(undefined8 *)(param_2 + 0x1300));
            if ((uint)*(ushort *)(param_2 + 0x114e) <= iVar5 + 1U) break;
          }
          iVar5 = iVar5 + 1;
          plVar2 = (long *)FUN_0085e8d4(*(undefined8 *)(param_2 + 0x1308),iVar5);
        } while( true );
      }
      *(undefined1 *)(param_2 + 0x1370) = 0;
    }
    local_50[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1378));
  return;
}


