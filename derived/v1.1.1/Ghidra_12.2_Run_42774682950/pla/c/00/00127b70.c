/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00127b70; name: FUN_00127b70
 */


long FUN_00127b70(undefined8 *param_1,uint *param_2,uint *param_3,size_t *param_4,long param_5,
                 ulong param_6)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint *__src;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  ulong __n;
  uint *puVar7;
  
  __src = (uint *)((long)param_2 + 2);
  if (param_3 < __src) {
    FUN_0010a430();
    pcVar6 = *(code **)PTR_PTR_043722f8;
    if (pcVar6 == (code *)0x0) goto LAB_00127d2c;
    pcVar5 = "OODLE ERROR : corruption : from_ptr+2 <= from_end\n";
    uVar4 = 0x2f;
  }
  else {
    bVar1 = (byte)*param_2;
    if ((char)bVar1 < '\0') {
      uVar2 = bVar1 >> 4 & 7;
      if ((bVar1 >> 4 & 7) == 0) {
        __n = (ulong)(ushort)((ushort)*param_2 >> 8) | ((ulong)(ushort)*param_2 & 0xf) << 8;
        if (param_5 < (long)__n) {
          return -1;
        }
        puVar7 = (uint *)((long)__src + __n);
        if (param_3 < puVar7) {
          return -1;
        }
LAB_00127ccc:
        if ((param_6 & 1) == 0) {
          *param_1 = __src;
        }
        else {
          memmove((void *)*param_1,__src,__n);
        }
        *param_4 = __n;
        return (long)puVar7 - (long)param_2;
      }
LAB_00127c10:
      lVar3 = FUN_00119c60(uVar2,param_1,param_2,param_3,param_4,param_5);
      return lVar3;
    }
    if (param_2 + 1 <= param_3) {
      uVar2 = (uint)(int)(char)bVar1 >> 4 & 0xf;
      if (uVar2 == 0) {
        __src = (uint *)((long)param_2 + 3);
        uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        if ((((uVar2 & 0xffff) >> 10 != 0) ||
            (__n = (ulong)((uVar2 >> 0x10 | uVar2 << 0x10) >> 8 & 0x3ffff), param_5 < (long)__n)) ||
           (puVar7 = (uint *)((long)__src + __n), param_3 < puVar7)) {
          return -1;
        }
        goto LAB_00127ccc;
      }
      goto LAB_00127c10;
    }
    if ((uint *)((long)param_2 + 3) != param_3) {
      return -1;
    }
    if ((bVar1 == 0 && *(char *)((long)param_2 + 1) == '\0') && *(char *)((long)param_2 + 2) == '\0'
       ) {
      *param_1 = 0;
      *param_4 = 0;
      return 3;
    }
    FUN_0010a430();
    pcVar6 = *(code **)PTR_PTR_043722f8;
    if (pcVar6 == (code *)0x0) goto LAB_00127d2c;
    pcVar5 = "OODLE ERROR : corruption : header == 0\n";
    uVar4 = 0x72;
  }
  (*pcVar6)(0,"v:/devel/projects/oodle2/core/newlz_arrays.inl",uVar4,pcVar5);
LAB_00127d2c:
  FUN_0010a450();
  return -1;
}


