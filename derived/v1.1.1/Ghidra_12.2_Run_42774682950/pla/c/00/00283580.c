/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00283580; name: FUN_00283580
 */


undefined8 FUN_00283580(float param_1,long param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (param_1 != 0.0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | (uint)(1L << ((long)iVar1 & 0x3fU));
  }
  if (*(char *)(param_3 + 10) != '\x01') {
    param_1 = 0.0;
  }
  FUN_00265ebc(param_1,param_3,param_4,0,*(undefined8 *)(param_2 + 0x11f0));
  if (*(int *)(param_3 + 0x17c) < 1) {
    if (*(char *)(param_3 + 0xc) != '\0') {
      nn::os::LockMutex((MutexType *)(param_2 + 0x16c0));
      iVar1 = *(int *)(param_2 + 0x8b8);
      if (0 < iVar1) {
        plVar3 = *(long **)(param_2 + 0x8b0);
        lVar4 = (long)iVar1;
        do {
          if (*plVar3 == param_3) goto LAB_0028378c;
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 1;
        } while (lVar4 != 0);
      }
      (*(long **)(param_2 + 0x8b0))[iVar1] = param_3;
      *(int *)(param_2 + 0x8b8) = *(int *)(param_2 + 0x8b8) + 1;
LAB_0028378c:
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x16c0));
      return 0;
    }
  }
  else if (*(char *)(param_3 + 0xc) != '\0') {
    *(int *)(param_2 + 0x1260) = *(int *)(param_2 + 0x1260) + 1;
    *(int *)(param_2 + 0x1264) = *(int *)(param_2 + 0x1264) + *(int *)(param_3 + 0x17c);
    *(int *)(param_2 + 0x1268) = *(int *)(param_2 + 0x1268) + *(int *)(param_3 + 0x180);
    *(int *)(param_2 + 0x1270) = *(int *)(param_2 + 0x1270) + *(int *)(param_3 + 0x188);
    *(int *)(param_2 + 0x1274) = *(int *)(param_2 + 0x1274) + *(int *)(param_3 + 0x18c);
    *(int *)(param_2 + 0x1278) = *(int *)(param_2 + 0x1278) + *(int *)(param_3 + 400);
    *(int *)(param_2 + 0x126c) = *(int *)(param_2 + 0x126c) + *(int *)(param_3 + 0x184);
    *(int *)(param_2 + 0x127c) = *(int *)(param_2 + 0x127c) + *(int *)(param_3 + 0x194);
    *(int *)(param_2 + 0x1280) = *(int *)(param_2 + 0x1280) + *(int *)(param_3 + 0x198);
    *(int *)(param_2 + 0x1284) = *(int *)(param_2 + 0x1284) + *(int *)(param_3 + 0x19c);
    *(int *)(param_2 + 0x1288) = *(int *)(param_2 + 0x1288) + *(int *)(param_3 + 0x1a0);
    *(int *)(param_2 + 0x128c) = *(int *)(param_2 + 0x128c) + *(int *)(param_3 + 0x1a4);
    lVar4 = *(long *)(param_2 + 0x1298) + *(long *)(param_3 + 0x1b0);
    *(long *)(param_2 + 0x1298) = lVar4;
    lVar2 = (long)iVar1 * 4;
    *(int *)(param_2 + 0x1290) = *(int *)(param_2 + 0x1290) + *(int *)(param_3 + 0x1a8);
    *(long *)(param_2 + 0x1298) = *(long *)(param_3 + 0x1b0) + lVar4;
    lVar4 = *(long *)(param_2 + 0x10) + lVar2;
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | *(uint *)(param_3 + 0x230);
    lVar4 = *(long *)(param_2 + 0x10) + lVar2;
    *(uint *)(lVar4 + 0x7b8) = *(uint *)(lVar4 + 0x7b8) | *(uint *)(param_3 + 0x3c);
    lVar2 = *(long *)(param_2 + 0x10) + lVar2;
    *(uint *)(lVar2 + 0x8b8) = *(uint *)(lVar2 + 0x8b8) | *(uint *)(param_3 + 0x40);
    return 1;
  }
  FUN_00271770("Invalid EmitterSet has been detected. Invalidates handle.");
  *(undefined4 *)(param_3 + 0x2c) = 0xffffffff;
  return 0;
}


