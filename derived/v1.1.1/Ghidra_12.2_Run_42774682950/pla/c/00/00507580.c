/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507580; name: FUN_00507580
 */


ulong * FUN_00507580(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *__s;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_LAB_04373088;
  if (param_2 == param_1) {
    return param_1;
  }
  if ((*param_2 & 1) == 0) {
    FUN_00509778(param_1,param_2 + 1,*param_2 >> 1);
    return param_1;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
joined_r0x005075e4:
    if (uVar2 >> 1 != 0) {
      uVar5 = uVar2 >> 1;
      do {
        uVar4 = uVar5 - 1;
        puVar3 = (undefined8 *)__s[uVar5 - 1];
        __s[uVar5 - 1] = 0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          FUN_002e2ea0(puVar1,puVar3);
        }
        uVar5 = uVar4;
      } while (uVar4 != 0);
    }
    memset(__s,0xab,(uVar2 >> 1) << 3);
    if ((*param_1 & 1) == 0) goto LAB_0050765c;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s != (ulong *)0x0) goto joined_r0x005075e4;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
LAB_0050765c:
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("IsMemcpyOk::value || other_storage.GetIsAllocated()",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1b2,
                  "MemcpyFrom");
  }
  *param_1 = *param_2;
  uVar5 = param_2[2];
  uVar2 = param_2[1];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  param_1[2] = uVar5;
  param_1[1] = uVar2;
  *param_2 = 0;
  return param_1;
}


