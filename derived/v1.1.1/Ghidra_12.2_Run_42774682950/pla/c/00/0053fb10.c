/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053fb10; name: FUN_0053fb10
 */


undefined8
FUN_0053fb10(long *param_1,void *param_2,size_t param_3,undefined8 param_4,undefined8 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (((bVar1 != 0) &&
      ((double)(*param_1 + 1) / (double)(ulong)(long)(1 << (ulong)(bVar1 & 0x1f)) <= 0.85)) ||
     (uVar3 = FUN_0053f760(param_1,(ulong)bVar1 + 1,param_5), (uVar3 & 1) != 0)) {
    if (param_5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("alloc","external/upb\\upb/upb.h",0x59,"upb_malloc");
    }
    puVar4 = (undefined4 *)(*(code *)*param_5)(param_5,0,0,param_3 + 5);
    uVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (int)param_3;
      if (param_3 != 0) {
        memcpy(puVar4 + 1,param_2,param_3);
      }
      *(undefined1 *)((long)puVar4 + param_3 + 4) = 0;
      uVar2 = FUN_0053fd30(param_2,param_3,0);
      FUN_0053ff60(param_1,param_2,param_3,puVar4,param_4,uVar2,&LAB_00540200,&LAB_00540210);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


