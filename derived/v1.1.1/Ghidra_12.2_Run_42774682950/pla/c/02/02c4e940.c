/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4e940; name: mmap
 */


void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar8 = __len + 0xfff & 0xfffffffffffff000;
  std::mutex::lock();
  if (DAT_043f22b0 == 0) {
    lVar3 = DAT_043f22a0;
  }
  else {
    puVar6 = &DAT_043f22b8;
    if (DAT_043f22b8 != (undefined8 *)0x0) {
      puVar6 = DAT_043f22b8;
    }
    if (uVar8 <= (ulong)puVar6[6]) {
      do {
        plVar5 = puVar6 + 1;
        if ((*plVar5 == 0) || (*(ulong *)(*plVar5 + 0x30) < uVar8)) {
          plVar5 = puVar6 + 2;
          if ((*plVar5 == 0) || (*(ulong *)(*plVar5 + 0x30) < uVar8)) goto LAB_02c4ea0c;
        }
        puVar6 = (undefined8 *)*plVar5;
      } while( true );
    }
    puVar6 = DAT_043f22b8;
    if (DAT_043f22b8 == (undefined8 *)0x0) {
LAB_02c4e9c8:
      do {
        puVar7 = puVar6;
        puVar6 = (undefined8 *)puVar7[2];
      } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
    }
    else {
      if ((DAT_043f22c0 == (undefined8 *)0x0) || (DAT_043f22c8 == (undefined8 *)0x0)) {
        puVar1 = DAT_043f22c0;
        if (DAT_043f22c0 == (undefined8 *)0x0) {
          if ((undefined8 **)DAT_043f22b8[1] == &DAT_043f22b8) {
            do {
              puVar7 = (undefined8 *)*puVar6;
              bVar2 = (undefined8 *)puVar7[1] == puVar6;
              puVar6 = puVar7;
            } while (bVar2);
          }
          else {
            puVar7 = DAT_043f22b8;
          }
          goto LAB_02c4ea64;
        }
      }
      else if (((DAT_043f22c0 == DAT_043f22c8) || ((undefined8 **)*DAT_043f22c0 != &DAT_043f22b8))
              || (puVar1 = DAT_043f22c0, (undefined8 **)*DAT_043f22c8 != &DAT_043f22b8))
      goto LAB_02c4e9c8;
      do {
        puVar7 = puVar1;
        puVar1 = (undefined8 *)puVar7[2];
      } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
    }
LAB_02c4ea64:
    lVar3 = puVar7[5];
    if ((ulong)(DAT_043f22a8 + DAT_043f22a0) <= puVar7[5] + uVar8) {
      pvVar4 = (void *)0x0;
      goto LAB_02c4ea90;
    }
  }
  goto LAB_02c4ea84;
LAB_02c4ea0c:
  lVar3 = puVar6[4] - puVar6[6];
LAB_02c4ea84:
  pvVar4 = (void *)FUN_02c4e6b0(lVar3,uVar8);
LAB_02c4ea90:
  std::mutex::unlock();
  return pvVar4;
}


